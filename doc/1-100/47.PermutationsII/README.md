
# Problem 47 : PermutationsII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/47.PermutationsII/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<bool> visited(nums.size(), false);
        vector<int> path;
        dfs(ans, visited, path, nums);
        return ans;
    }

    void dfs(vector<vector<int>>& ans, vector<bool>& visited, vector<int> path, vector<int>& nums){
        set<int> s;
        if (path.size() == nums.size())
            ans.push_back(path);
        else{
            for (int i = 0;i < nums.size();++i){
                if (visited[i] == false && s.find(nums[i]) == s.end()){
                    s.insert(nums[i]);
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
        HashSet<int> hash = new HashSet<int>();
        if (path.Count == nums.Length)
            ans.Add(new List<int>(path));
        else{
            for (int i = 0;i < nums.Length;++i){
                if (visited[i] == 0 && hash.Contains(nums[i]) == false){
                    hash.Add(nums[i]);
                    visited[i] = 1;
                    path.Add(nums[i]);
                    dfs(ans, visited, path, nums);
                    path.RemoveAt(path.Count - 1);
                    visited[i] = 0;
                }
            }
        }
    }
    public IList<IList<int>> PermuteUnique(int[] nums) {
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
    public List<List<Integer>> permuteUnique(int[] nums) {
        List<List<Integer>> ans = new LinkedList<>();
        int[] visited = new int[nums.length];      
        List<Integer> path = new LinkedList<>();
        dfs(ans, visited, path, nums);
        return ans;
    }

    void dfs(List<List<Integer>> ans, int[] visited, List<Integer> path, int[] nums){
        HashSet<Integer> hash = new HashSet<>();
        if (path.size() == nums.length)
            ans.add(new LinkedList<>(path));
        else{
            for (int i = 0;i < nums.length;++i){
                if (visited[i] == 0 && hash.contains(nums[i]) == false){
                    hash.add(nums[i]);
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
    def permuteUnique(self, nums: 'List[int]') -> 'List[List[int]]':
        ans = []
        tmp = []
        m = [0] * len(nums)
        def recursive(i, nums, ans, tmp, m):
            s = set()
            if len(tmp) == len(nums):
                return ans.append(deepcopy(tmp))
            for j in range(len(nums)):
                if m[j] == 0 and nums[j] not in s:
                    s.add(nums[j])
                    tmp.append(nums[j])
                    m[j] = 1
                    recursive(j + 1, nums, ans, tmp, m)
                    m[j] = 0
                    tmp.pop()
        recursive(0, nums, ans, tmp, m)
        return ans

```


