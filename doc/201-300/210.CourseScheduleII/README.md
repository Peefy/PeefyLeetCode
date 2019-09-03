
# problem 210 : CourseScheduleII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/210.CourseScheduleII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
	vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
		vector<vector<int>> adjList(numCourses, vector<int>{0});
		for (auto i : prerequisites) {
			adjList[i[0]][0]++;
			adjList[i[1]].push_back(i[0]);
		}
		queue<int> q;
		for (int i = 0; i < numCourses; i++) {
			if (!adjList[i][0])
				q.push(i);
		}
		vector<int> ret;
		while (!q.empty()) {
			auto v = q.front();
			q.pop();
			ret.push_back(v);
			if (adjList[v].size() > 1) {
				for (int i = 1; i < adjList[v].size(); i++) {
					auto w = adjList[v][i];
					adjList[w][0]--;
					if (!adjList[w][0])
						q.push(w);
				}
			}
		}
		if (ret.size() == numCourses)
			return ret;
		ret = {};
		return ret;
	}
};

```

## C# Solution

```csharp

public class Solution {
    static int WHITE = 1;
    static int GRAY = 2;
    static int BLACK = 3;

    bool isPossible;
    Dictionary<int, int> color;
    Dictionary<int, List<int>> adjList;
    List<int> topologicalOrder;
    private void init(int numCourses) {
        this.isPossible = true;
        this.color = new Dictionary<int, int>();
        this.adjList = new Dictionary<int, List<int>>();
        this.topologicalOrder = new List<int>();

        for (int i = 0; i < numCourses; i++) {
            this.color.Add(i, WHITE);
        }
    }

    private void dfs(int node) {

        // Don't recurse further if we found a cycle already
        if (!this.isPossible) {
            return;
        }

        // Start the recursion
        this.color[node] = GRAY;

        // Traverse on neiing vertices
        if (this.adjList.ContainsKey(node) == true)
        {
            foreach (var nei in this.adjList[node]) {
                if (this.color[nei] == WHITE) {
                    this.dfs(nei);
                } else if (this.color[nei] == GRAY) {
                    // An edge to a GRAY vertex represents a cycle
                    this.isPossible = false;
                }
            }
        }


        // Recursion ends. We mark it as black
        this.color[node] = BLACK;
        this.topologicalOrder.Add(node);
    }

    public int[] FindOrder(int numCourses, int[][] prerequisites) {
        this.init(numCourses);

        // Create the adjacency list representation of the graph
        for (int i = 0; i < prerequisites.Length; i++) {
            int dest = prerequisites[i][0];
            int src = prerequisites[i][1];
            List<int> lst;
            if (adjList.ContainsKey(src) == false){
                lst = new List<int>();
            }
            else{
                lst = adjList[src];
            }
            lst.Add(dest);
            if (adjList.ContainsKey(src) == false)
                adjList.Add(src, lst);
            else
                adjList[src] = lst;
        }

        // If the node is unprocessed, then call dfs on it.
        for (int i = 0; i < numCourses; i++) {
            if (this.color[i] == WHITE) {
                this.dfs(i);
            }
        }

        int[] order;
        if (this.isPossible) {
            order = new int[numCourses];
            for (int i = 0; i < numCourses; i++) {
                order[i] = this.topologicalOrder[numCourses - i - 1];
            }
        } else {
            order = new int[0];
        }

        return order;
    }
}

```

## Java Solution

```java

class Solution {
    static int WHITE = 1;
    static int GRAY = 2;
    static int BLACK = 3;

    boolean isPossible;
    HashMap<Integer, Integer> color;
    HashMap<Integer, List<Integer>> adjList;
    List<Integer> topologicalOrder;

    private void init(int numCourses) {
        this.isPossible = true;
        this.color = new HashMap<Integer, Integer>();
        this.adjList = new HashMap<Integer, List<Integer>>();
        this.topologicalOrder = new ArrayList<Integer>();

        for (int i = 0; i < numCourses; i++) {
            this.color.put(i, WHITE);
        }
    }

    private void dfs(int node) {

        // Don't recurse further if we found a cycle already
        if (!this.isPossible) {
            return;
        }

        // Start the recursion
        this.color.put(node, GRAY);

        // Traverse on neiing vertices
        for (Integer nei : this.adjList.getOrDefault(node, new ArrayList<Integer>())) {
            if (this.color.get(nei) == WHITE) {
                this.dfs(nei);
            } else if (this.color.get(nei) == GRAY) {
                // An edge to a GRAY vertex represents a cycle
                this.isPossible = false;
            }
        }

        // Recursion ends. We mark it as black
        this.color.put(node, BLACK);
        this.topologicalOrder.add(node);
    }

    public int[] findOrder(int numCourses, int[][] prerequisites) {

        this.init(numCourses);

        // Create the adjacency list representation of the graph
        for (int i = 0; i < prerequisites.length; i++) {
            int dest = prerequisites[i][0];
            int src = prerequisites[i][1];
            List<Integer> lst = adjList.getOrDefault(src, new ArrayList<Integer>());
            lst.add(dest);
            adjList.put(src, lst);
        }

        // If the node is unprocessed, then call dfs on it.
        for (int i = 0; i < numCourses; i++) {
            if (this.color.get(i) == WHITE) {
                this.dfs(i);
            }
        }

        int[] order;
        if (this.isPossible) {
            order = new int[numCourses];
            for (int i = 0; i < numCourses; i++) {
                order[i] = this.topologicalOrder.get(numCourses - i - 1);
            }
        } else {
            order = new int[0];
        }

        return order;
    }
}

```

## Python Solution

```python

from collections import defaultdict
class Solution:
    def findOrder(self, numCourses, prerequisites):
        adj_list = defaultdict(list)
        indegree = {}
        for dest, src in prerequisites:
            adj_list[src].append(dest)
            indegree[dest] = indegree.get(dest, 0) + 1
        zero_indegree_queue = [k for k in range(numCourses) if k not in indegree]
        topological_sorted_order = []
        while zero_indegree_queue:
            vertex = zero_indegree_queue.pop(0)
            topological_sorted_order.append(vertex)
            if vertex in adj_list:
                for nei in adj_list[vertex]:
                    indegree[nei] -= 1
                    if indegree[nei] == 0:
                        zero_indegree_queue.append(nei)
        return topological_sorted_order if len(topological_sorted_order) == numCourses else []    

```




