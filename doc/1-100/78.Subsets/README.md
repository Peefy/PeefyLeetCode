
# Problem 78 : Subsets

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/78.Subsets/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    void subs(vector<int>& nums, int index, vector<vector<int>>& res, vector<int>& tmp, int n){
        res.push_back(tmp);
        for (int i = index; i < n; i++) {
            vector<int> newtmp(tmp);
            newtmp.push_back(nums[i]);
            subs(nums, i + 1, res, newtmp, n);
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> tmp;
        int n = nums.size();
        subs(nums, 0, res, tmp, n);
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    void subs(int[] nums, int index, IList<IList<int>> res, List<int> tmp, int n){
        res.Add(tmp);
        for (int i = index; i < n; i++) {
            var newtmp = new List<int>(tmp);
            newtmp.Add(nums[i]);
            subs(nums, i + 1, res, newtmp, n);
        }
    }
    public IList<IList<int>> Subsets(int[] nums) {
        var res = new List<IList<int>>();
        int n = nums.Length;
        subs(nums, 0, res, new List<int>(), n);
        return res;
    }
}

```

## Java Solution

```java

class Solution {

    public void subs(int[] nums, int index, List<List<Integer>> res, LinkedList<Integer> tmp, int n){
        res.add(tmp);
        for (int i = index; i < n; i++) {
            LinkedList<Integer> newtmp = new LinkedList<>(tmp);
            newtmp.add(nums[i]);
            subs(nums, i + 1, res, newtmp, n);
        }
    }

    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> res = new LinkedList<>();
        int n = nums.length;
        subs(nums, 0, res, new LinkedList<>(), n);
        return res;
    }
}

```

## Python Solution

```python


from copy import deepcopy

class Solution:
    def subsets(self, nums):
        ans = [[]]
        l = []
        for i in range(1, len(nums) + 1):
            self.recursive(ans, [], len(nums), i, nums, 0)
        return ans 

    def recursive(self, ans, tmp, n, k, l, index):
        if len(tmp) == k:
            ans.append(deepcopy(tmp)) 
            return
        for i in range(index, n):
            tmp.append(l[i])
            self.recursive(ans, tmp, n, k, l, i + 1)
            tmp.pop()

```


