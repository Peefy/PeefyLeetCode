
# Problem 77 : Combinations

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/77.Combinations/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    void recursive(vector<vector<int>>& ans, vector<int>& tmp, int n, int k, int index){
        if (tmp.size() == k){
            ans.push_back(tmp);
            return;
        }
        if (k - tmp.size() > n - index)
            return;
        for (int i = index; i < n + 1; i++) {
            tmp.push_back(i);
            recursive(ans, tmp, n, k, i + 1);
            tmp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> tmp;
        recursive(ans, tmp, n, k, 1);
        return ans;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public void Recursive(IList<IList<int>> ans, List<int> tmp, int n, int k, int index){
        if (tmp.Count == k){
            ans.Add(new List<int>(tmp));
            return;
        }
        for (int i = index; i < n + 1; i++) {
            tmp.Add(i);
            Recursive(ans, tmp, n, k, i + 1);
            tmp.RemoveAt(tmp.Count - 1);
        }
    }
    public IList<IList<int>> Combine(int n, int k) {
        IList<IList<int>> ans = new List<IList<int>>();
        Recursive(ans, new List<int>(), n, k, 1);
        return ans;
    }
}

```

## Java Solution

```java

class Solution {
    public void recursive(List<List<Integer>> ans, LinkedList<Integer> tmp, int n, int k, int index){
        if (tmp.size() == k){
            ans.add(new LinkedList<>(tmp));
            return;
        }
        for (int i = index; i < n + 1; i++) {
            tmp.add(i);
            recursive(ans, tmp, n, k, i + 1);
            tmp.removeLast();
        }
    }

    public List<List<Integer>> combine(int n, int k) {
        List<List<Integer>> ans = new LinkedList<>();
        recursive(ans, new LinkedList<>(), n, k, 1);
        return ans;
    }
}

```

## Python Solution

```python

from copy import deepcopy

class Solution:
    def combine(self, n: int, k: int):
        ans = []
        l = []
        for i in range(1, n + 1):
            l.append(i)
        self.recursive(ans, [], n, k, l, 0)
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


