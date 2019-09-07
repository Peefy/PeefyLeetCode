
# problem 216 : CombinationSumIII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/216.CombinationSumIII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:

    const int MAX_INDEX = 10;

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> tmp;
        traceBack(k, n, 0, 1, tmp, ans);
        return ans;
    }

    void traceBack(int k, int n, int sum, int begin, 
        vector<int>& list, vector<vector<int>>& ans){
        if (k == 0){
            if (n == sum)
                ans.push_back(vector<int>(list));
            return;
        }
        for (int i = begin; i < MAX_INDEX; i++) {
            list.push_back(i);
            traceBack(k - 1, n, sum + i, i + 1, list, ans);
            list.pop_back();
        }
    }
};


```

## C# Solution

```csharp

public class Solution {
    static int MaxIndex = 10;
    public void traceBack(int k, int n, int sum, int begin, List<int> list, List<IList<int>> ans){
        if (k == 0){
            if (n == sum)
                ans.Add(new List<int>(list));
            return;
        }
        for (int i = begin; i < MaxIndex; i++) {
            list.Add(i);
            traceBack(k - 1, n, sum + i, i + 1, list, ans);
            list.RemoveAt(list.Count - 1);
        }
    }
    public IList<IList<int>> CombinationSum3(int k, int n) {
        List<IList<int>> ans = new List<IList<int>>();
        traceBack(k, n, 0, 1, new List<int>(), ans);
        return ans;
    }
}

```

## Java Solution

```java

class Solution {

    public final int MAX_INDEX = 10;

    public void traceBack(int k, int n, int sum, int begin, LinkedList<Integer> list, List<List<Integer>> ans){
        if (k == 0){
            if (n == sum)
                ans.add(new ArrayList<>(list));
            return;
        }
        for (int i = begin; i < MAX_INDEX; i++) {
            list.add(i);
            traceBack(k - 1, n, sum + i, i + 1, list, ans);
            list.removeLast();
        }
    }

    public List<List<Integer>> combinationSum3(int k, int n) {
        List<List<Integer>> ans = new ArrayList<>();
        traceBack(k, n, 0, 1, new LinkedList<>(), ans);
        return ans;
    }
}


```

## Python Solution

```python

import itertools

class Solution:
    def combinationSum3(self, k, n):
        return [item for item in itertools.combinations(range(1, 10), k) if sum(item) == n]
             

```




