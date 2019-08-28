
# problem 207 : CourseSchedule

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/207.CourseSchedule/problem.png"/>

## C++ Solution

```c++

#define RETURN_IF(expr, errcode) {if(expr) {return (errcode);}}
bool find(vector<vector<int>> &vec, int start, int end) {
	for (size_t i = 0; i < vec[start].size(); i++) 
		RETURN_IF(vec[start][i] == 1 && (i == end || find(vec, i, end)), true);
	return false;
}

class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
		vector<vector<int>> vec(numCourses, vector<int>(numCourses,0));
		for (auto pre : prerequisites) {
			RETURN_IF(find(vec, pre[1], pre[0]), false);
			vec[pre[0]][pre[1]] = 1;
		}
        return true;
    }
};


```

## C# Solution

```csharp

public class Solution {
    public bool CanFinish(int numCourses, int[][] prerequisites) {
        int[] indegrees = new int[numCourses];
        foreach (int[] cp in prerequisites) indegrees[cp[0]]++;
        List<int> queue = new List<int>();
        for(int i = 0; i < numCourses; i++){
            if(indegrees[i] == 0) queue.Add(i);
        }
        while(queue.Count != 0) {
            int pre = queue[0];
            queue.RemoveAt(0);
            numCourses--;
            foreach (int[] req in prerequisites) {
                if(req[1] != pre) continue;
                if(--indegrees[req[0]] == 0) 
                    queue.Add(req[0]);
            }
        }
        return numCourses == 0;
    }
}

```

## Java Solution

```java

class Solution {
    public boolean canFinish(int numCourses, int[][] prerequisites) {
        int[] indegrees = new int[numCourses];
        for(int[] cp : prerequisites) indegrees[cp[0]]++;
        LinkedList<Integer> queue = new LinkedList<>();
        for(int i = 0; i < numCourses; i++){
            if(indegrees[i] == 0) queue.addLast(i);
        }
        while(!queue.isEmpty()) {
            Integer pre = queue.removeFirst();
            numCourses--;
            for(int[] req : prerequisites) {
                if(req[1] != pre) continue;
                if(--indegrees[req[0]] == 0) queue.add(req[0]);
            }
        }
        return numCourses == 0;
    }
}

```

## Python Solution

```python

class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        indegrees = [0 for _ in range(numCourses)]
        adjacency = [[] for _ in range(numCourses)]
        queue = []
        for cur, pre in prerequisites:
            indegrees[cur] += 1
            adjacency[pre].append(cur)
        for i in range(len(indegrees)):
            if not indegrees[i]: 
                queue.append(i)
        while queue:
            pre = queue.pop(0)
            numCourses -= 1
            for cur in adjacency[pre]:
                indegrees[cur] -= 1
                if not indegrees[cur]: 
                    queue.append(cur)
        return not numCourses
         

```




