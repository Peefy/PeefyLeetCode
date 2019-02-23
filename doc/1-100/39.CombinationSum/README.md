
# Problem 39 : CombinationSum

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/39.CombinationSum/problem.png"/>

## C++ Solution

```c++

static int x = []() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();

class Solution {
public:
    vector<vector<int>> dfs(vector<int>& candidates, int startidx, int target){
        vector<vector<int>> res;
        for (int i = startidx;i < candidates.size();++i){
            if (candidates[i] > target)
                continue;
            if (candidates[i] == target){
                res.push_back(vector<int>{candidates[i]});
                continue;
            }
            auto item = dfs(candidates, i, target - candidates[i]);
            for (auto ii : item){
                ii.push_back(candidates[i]);
                res.push_back(ii);
            }
        }
        return res;
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        return dfs(candidates, 0, target);
    }
};

```

## C# Solution

```csharp

public class Solution {
    List<IList<int>> ans = new List<IList<int>>();
    List<int> t = new List<int>();
    void Dfs(int i, int j, int[] v){
        if(j == 0){
            ans.Add(new List<int>(t));
            return;
        }
        if(i == v.Length)
            return;    
        if(j >= v[i]){
            t.Add(v[i]);
            Dfs(i, j - v[i], v);
            t.RemoveAt(t.Count - 1);
        }
        Dfs(i + 1, j, v);
        return;
    }
    public IList<IList<int>> CombinationSum(int[] candidates, int target) {
        Dfs(0, target, candidates);
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    List<List<Integer>> ans = new LinkedList<>();
    List<Integer> t = new LinkedList<>();

    void dfs(int i, int j, int[] v){
        if(j == 0){
            ans.add(new LinkedList<>(t));
            return;
        }
        if(i == v.length)
            return;    
        if(j >= v[i]){
            t.add(v[i]);
            dfs(i, j - v[i], v);
            t.remove(t.size() - 1);
        }
        dfs(i + 1, j, v);
        return;
    }

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        dfs(0, target, candidates);
        return ans;
    }
}

```

## Python Solution

```python

from copy import deepcopy

class Solution:
    def combinationSum(self, candidates: 'List[int]', target: 'int') -> 'List[List[int]]':
        ans = []
        r = []
        def recursive(r, ans, candidates, target, num):
            if target == 0:
                r.append(ans)
                return
            if target < candidates[0]:
                return
            for i in range(num, len(candidates)):
                if candidates[i] > target:
                    break
                l = deepcopy(ans)
                l.append(candidates[i])
                recursive(r, l, candidates, target - candidates[i], i)
        candidates.sort()
        recursive(r, ans, candidates, target, 0)
        return r

```


