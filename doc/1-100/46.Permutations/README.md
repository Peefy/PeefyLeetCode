
# Problem 46 : Permutations

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/46.Permutations/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<bool> visited(nums.size(), false);
        vector<int> path;
        dfs(ans, visited, path, nums);
        return ans;
    }

    void dfs(vector<vector<int>>& ans, vector<bool>& visited, vector<int> path, vector<int>& nums){
        if (path.size() == nums.size())
            ans.push_back(path);
        else{
            for (int i = 0;i < nums.size();++i){
                if (visited[i] == false){
                    visited[i] = true;
                    path.push_back(nums[i]);
                    dfs(ans, visited, path, nums);
                    path.pop_back();
                    visited[i] = false;
                }
            }
        }
    }
};

```

## C# Solution

```csharp

public class Solution {
    void dfs(IList<IList<int>> ans, int[] visited, IList<int> path, int[] nums){
        if (path.Count == nums.Length)
            ans.Add(new List<int>(path));
        else{
            for (int i = 0;i < nums.Length;++i){
                if (visited[i] == 0){
                    visited[i] = 1;
                    path.Add(nums[i]);
                    dfs(ans, visited, path, nums);
                    path.RemoveAt(path.Count - 1);
                    visited[i] = 0;
                }
            }
        }
    }
    public IList<IList<int>> Permute(int[] nums) {
        IList<IList<int>> ans = new List<IList<int>>();
        int[] visited = new int[nums.Length];      
        IList<int> path = new List<int>();
        dfs(ans, visited, path, nums);
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans = new LinkedList<>();
        int[] visited = new int[nums.length];      
        List<Integer> path = new LinkedList<>();
        dfs(ans, visited, path, nums);
        return ans;
    }

    void dfs(List<List<Integer>> ans, int[] visited, List<Integer> path, int[] nums){
        if (path.size() == nums.length)
            ans.add(new LinkedList<>(path));
        else{
            for (int i = 0;i < nums.length;++i){
                if (visited[i] == 0){
                    visited[i] = 1;
                    path.add(nums[i]);
                    dfs(ans, visited, path, nums);
                    path.remove(path.size() - 1);
                    visited[i] = 0;
                }
            }
        }
    }
}

```

## Python Solution

```python

from copy import deepcopy

class Solution:
    def permute(self, nums: 'List[int]') -> 'List[List[int]]':
        ans = []
        tmp = []
        m = {}
        for num in nums:
            m[num] = 0
        def recursive(i, nums, ans, tmp, m):
            if len(tmp) == len(nums):
                return ans.append(deepcopy(tmp))
            for j in range(len(nums)):
                if m[nums[j]] == 0:
                    tmp.append(nums[j])
                    m[nums[j]] += 1
                    recursive(j + 1, nums, ans, tmp, m)
                    tmp.pop()
                    m[nums[j]] -= 1
        recursive(0, nums, ans, tmp, m)
        return ans

```


