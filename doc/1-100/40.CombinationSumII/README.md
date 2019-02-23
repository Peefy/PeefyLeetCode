
# Problem 40 : CombinationSumII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/40.CombinationSumII/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    void dfs(vector<int>& candidates, vector<int>& path, int gap, 
        vector<vector<int>>& res, int start){
        if (gap == 0){
            res.push_back(vector<int>(path));
            return;
        }
        int previous = -1;
        for (int i = start;i < candidates.size();++i){
            if (previous == candidates[i])
                continue;
            if (gap < candidates[i])
                return;
            previous = candidates[i];
            path.push_back(candidates[i]);
            dfs(candidates, path, gap - candidates[i], res, i+1);
            path.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        if (candidates.size() == 0)
            return vector<vector<int>>();    
        vector<int> path;
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        dfs(candidates, path, target, res, 0);
        return res;
    }
};

```

## C# Solution

```csharp

public class Solution {
    void dfs(int[] candidates, List<int> path, int gap, 
        IList<IList<int>> res, int start){
        if (gap == 0){
            res.Add(new List<int>(path));
            return;
        }
        int previous = -1;
        for (int i = start;i < candidates.Length;++i){
            if (previous == candidates[i])
                continue;
            if (gap < candidates[i])
                return;
            previous = candidates[i];
            path.Add(candidates[i]);
            dfs(candidates, path, gap - candidates[i], res, i+1);
            path.RemoveAt(path.Count - 1);
        }
    }
    public IList<IList<int>> CombinationSum2(int[] candidates, int target) {
        IList<IList<int>> res = new List<IList<int>>();
        if (candidates.Length == 0)
            return res;
        List<int> path = new List<int>();
        Array.Sort(candidates);
        dfs(candidates, path, target, res, 0);
        return res;
    }
}

```

## Java Solution

```java

class Solution {

    void dfs(int[] candidates, List<Integer> path, int gap, 
        List<List<Integer>> res, int start){
        if (gap == 0){
            res.add(new LinkedList<>(path));
            return;
        }
        int previous = -1;
        for (int i = start;i < candidates.length;++i){
            if (previous == candidates[i])
                continue;
            if (gap < candidates[i])
                return;
            previous = candidates[i];
            path.add(candidates[i]);
            dfs(candidates, path, gap - candidates[i], res, i+1);
            path.remove(path.size() - 1);
        }
    }

    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> res = new LinkedList<>();
        if (candidates.length == 0)
            return res;
        List<Integer> path = new LinkedList<>();
        Arrays.sort(candidates);
        dfs(candidates, path, target, res, 0);
        return res;
    }
}


```

## Python Solution

```python

from copy import deepcopy

class Solution:
    def combinationSum2(self, candidates: 'List[int]', target: 'int') -> 'List[List[int]]':
        ans = []
        r = []
        def recursive(r, ans, candidates, target, num):
            if target == 0:
                r.append(ans)
                return
            if target < candidates[0]:
                return
            while num < len(candidates) and candidates[num] <= target:
                l = deepcopy(ans)
                l.append(candidates[num])
                recursive(r, l, candidates,target-candidates[num],num+1);
                q = num
                while q + 1 < len(candidates) and candidates[num] == candidates[q + 1]:
                    q += 1
                if q > num:
                    num = q + 1
                    if q == len(candidates) - 1:
                        break
                else:
                    num += 1
        candidates.sort()
        recursive(r, ans, candidates, target, 0)
        return r

```


