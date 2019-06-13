
# Problem 90 : SubsetsII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/90.SubsetsII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    void dfs(vector<vector<int>> & res, vector<int> &path, vector<int>& nums, int index){
        res.push_back(vector<int>(path));     
        if (index == nums.size())
            return;
        for (int i = index; i < nums.size(); i++){
            if (i > index && nums[i] == nums[i - 1])
                continue;
            path.push_back(nums[i]);
            dfs(res, path, nums, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> path;
        dfs(res, path, nums, 0);
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    void Dfs(IList<IList<int>> res, List<int> path, int[] nums, int index){
        res.Add(new List<int>(path));     
        if (index == nums.Length)
            return;
        for (int i = index; i < nums.Length; i++){
            if (i > index && nums[i] == nums[i - 1])
                continue;
            path.Add(nums[i]);
            Dfs(res, path, nums, i + 1);
            path.RemoveAt(nums.Length - 1);
        }
    }
    public IList<IList<int>> SubsetsWithDup(int[] nums) {
        Array.Sort(nums);
        List<IList<int>> res = new List<IList<int>>();
        List<int> path = new List<int>();
        Dfs(res, path, nums, 0);
        return res;
    }
}

```

## Java Solution

```java

class Solution {
    void dfs(List<List<Integer>>  res, LinkedList<Integer> path, int[] nums, int index){
        res.add(new ArrayList<>(path));     
        if (index == nums.length)
            return;
        for (int i = index; i < nums.length; i++){
            if (i > index && nums[i] == nums[i - 1])
                continue;
            path.add(nums[i]);
            dfs(res, path, nums, i + 1);
            path.removeLast();
        }
    }

    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> res = new ArrayList<>();
        LinkedList<Integer> path = new LinkedList<>();
        dfs(res, path, nums, 0);
        return res;
    }
}

```

## Python Solution

```python

class Solution:
    def subsetsWithDup(self, nums):
        ans = []
        nums.sort()
        self.recursive(ans, [], len(nums), nums, 0)
        return ans 

    def recursive(self, ans, tmp, n, l, index):
        ans.append(tmp[:])
        if len(tmp) == n:    
            return
        for i in range(index, n):
            if i > index and l[i] == l[i - 1]:
                continue
            tmp.append(l[i])
            self.recursive(ans, tmp, n, l, i + 1)
            tmp.pop()

```


