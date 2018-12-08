
# problem 743 : NetworkDelayTime

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/701-800/743.NetworkDelayTime/problem.png"/>

c++解法为bellman_ford, 其他解法为dijsktra,但都需要进行初始化操作和松弛relax操作.

## C++ Solution

```c++

static int pr = []() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution{
  public:
    int networkDelayTime(vector<vector<int>> &times, int N, int K){
        vector<int> v(N + 1, INT32_MAX);
        v[K] = 0;
        int loop = 1;
        while (loop--){
            for (int i = 0; i < times.size(); i++){
                if (v[times[i][0]] != INT32_MAX){
                    int t = v[times[i][1]];
                    // relax
                    v[times[i][1]] = min(v[times[i][0]] + times[i][2], v[times[i][1]]); //更新连通时间
                    if (t != v[times[i][1]])
                        loop = 1; //如果这一趟没有任何变化,中止循环
                }
            }
        }
        int maxnum = 0;
        for (int j = 1; j <= N; j++){
            if (v[j] == INT32_MAX)
                return -1;
            maxnum = max(maxnum, v[j]);
        }
        return maxnum;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public int NetworkDelayTime(int[,] times, int N, int K)
        {
            // -- gen graph ---
            int[,] graph = new int[N, N];
            for (int i = 0; i < N; i++)
            {
                for (int j = 0; j < N; j++)
                {
                    if (i == j) graph[i,j] = 0;
                    else graph[i,j] = int.MaxValue;
                }
            }

            for (int i = 0; i < times.GetLength(0); i++)
            {
                int start = times[i, 0];
                int end = times[i, 1];
                graph[start - 1, end - 1] = times[i, 2];
            }

            // --- gen dis array
            int[] distance = new int[N];
            for (int i = 0; i < N; i++)
            {
                distance[i] = graph[K - 1, i];
            }

            bool[] resolved = new bool[N];
            resolved[K - 1] = true;

            int min = int.MaxValue;
            int candidate = -1;
            for (int i = 0; i < N; i++)
            {
                if (!resolved[i] && min > distance[i])
                {
                    min = distance[i];
                    candidate = i;
                }
            }

            while (candidate >= 0)
            {
                resolved[candidate] = true;
                for (int i = 0; i < N; i++)
                {
                    if (!resolved[i] && graph[candidate,i] < int.MaxValue)
                    {
                        if (distance[i] > distance[candidate] + graph[candidate,i])
                        {
                            distance[i] = distance[candidate] + graph[candidate,i];
                        }
                    }
                }

                min = int.MaxValue;
                candidate = -1;
                for (int i = 0; i < N; i++)
                {
                    if (!resolved[i] && min > distance[i])
                    {
                        min = distance[i];
                        candidate = i;
                    }
                }
            }

            int result = 0;
            for (int i = 0; i < N; i++)
            {
                if (distance[i] > result)
                {
                    result = distance[i];
                }
            }

            return (result < int.MaxValue) ? result : -1;
        }
    }

```

## Java Solution

```java

class Solution {
    public int networkDelayTime(int[][] times, int N, int K) {
        int limit = 99999999;
        int[][] matrix = new int[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; ++j){
                matrix[i][j] = -1;
            }
        }                                                                                                                                                                                       
        for (int[] uvw : times) {
            matrix[uvw[0] - 1][uvw[1] - 1] = uvw[2];
        }
        // Dijkstra算法
        int last_p = K - 1;
        int[] done = new int[N];
        done[last_p] = 1;

        int[] compare_buf = new int[N];
        int[] result_buf = new int[N];
        int[] front_node = new int[N];
        for (int i = 0; i < N; i++) {
            compare_buf[i] = limit;
            result_buf[i] = limit;
            front_node[i] = -1;
        }
        result_buf[K - 1] = 0;
        int maxresult = -limit;
        while (true){
            // 对last点进行遍历,更新compare_buf
            for (int i = 0; i < matrix[last_p].length; i++) {
                int v = matrix[last_p][i];
                if (done[i] == 1 || v == -1)
                    continue;
                int value = v + result_buf[last_p];
                // 松弛操作relax
                if (value < compare_buf[i]){
                    compare_buf[i] = value;
                    front_node[i] = last_p;
                }
            }
            int temp_min = limit;
            int temp_node = -1;
            for (int i = 0; i < compare_buf.length; i++) {
                int value = compare_buf[i];
                if (done[i] == 1 || value == limit)
                    continue;
                if (value < temp_min){
                    temp_min = value;
                    temp_node = i;
                }
            }
            if (temp_node == 1)
                break;
            else{
                done[temp_node] = -1;
                last_p = temp_node;
                result_buf[temp_node] = temp_min;        
                maxresult = Math.max(temp_min, maxresult);
            }
        }
        for (int d : done){
            if (d == 0)
                return -1;
        }
        return maxresult;
    }
}

```

## Python Solution

```python

from queue import PriorityQueue
import collections

class Solution:
    def networkDelayTime(self, times, N, K):
        """
        :type times: List[List[int]]
        :type N: int
        :type K: int
        :rtype: int
        """
        INF = 0x7FFFFFFF
        adj = collections.defaultdict(list)
        visit = [0] * (N + 1)
        dist = [INF] * (N + 1)
        q = PriorityQueue()

        for u, v, w in times:
            adj[u].append((v, w))

        dist[K] = 0
        q.put((dist[K], K))

        while not q.empty():
            MIN, u = q.get()
            if visit[u] == 0:
                visit[u] = 1
            else:
                continue
            for v, w in adj[u]:
                if MIN + w < dist[v]:
                    dist[v] = MIN + w
                    q.put((dist[v], v))
        return max(dist[1:]) if visit.count(0) == 1 else -1

```





