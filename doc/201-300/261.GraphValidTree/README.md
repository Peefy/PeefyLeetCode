
# problem 261 : GraphValidTree

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/261.GraphValidTree/problem.png"/>

判断一个图是不是一棵树：
* 无向图n个节点只有n-1条边
* 所有边没有形成环

初始端点n个是独立的，并且每个端点的父结点为自身索引。利用并查集，如果一条边的两个端点的最终父结点不相同，那么两个端点就可以合并到一个集合中。最后看是否只有一个集合即可。

## C++ Solution

```c++

class Solution {
public:
    bool validTree(int n, vector<pair<int, int>>& edges) {
        if(n != edges.size()+1) return false;
        vector<int> par(n);
        for(int i = 0; i < n; i++) par[i] = i;
        for(auto val: edges)
        {
            int par1 = val.first, par2 = val.second;
            while(par[par1] != par1) par1 = par[par1];
            while(par[par2] != par2) par2 = par[par2];
            if(par1 != par2) par[par2] = par1, n--;
        }
        return n==1;
    }
};

```

## C# Solution

```csharp

    public class Solution
    {
        public bool ValidTree(int n, List<KeyValuePair<int, int>> edges)
        {
            if (n != edges.Count + 1)
                return false;
            int[] par = new int[n];
            for (int i = 0; i < par.Length; i++)
            {
                par[i] = i;
            }
            foreach (var edge in edges)
            {
                int par1 = edge.Key;
                int par2 = edge.Value;
                while (par[par1] != par1)
                    par1 = par[par1];
                while (par[par2] != par2)
                    par2 = par[par2];
                if (par1 != par2)
                {
                    par[par2] = par1;
                    n--;
                }
            }
            return n == 1;
        }
    }

```

## Java Solution

```java

public class Solution {
    public boolean validTree(int n, List<Entry<Integer, Integer>> edges) {
        if (n != edges.size() + 1)
            return false;
        int[] par = new int[n];
        for (int i = 0; i < par.length; i++) {
            par[i] = i;
        }
        for (Entry<Integer, Integer> edge : edges) {
            int par1 = edge.getKey();
            int par2 = edge.getValue();
            while (par[par1] != par1) 
                par1 = par[par1];
            while (par[par2] != par2) 
                par2 = par[par2];
            if (par1 != par2) {
                par[par2] = par1;
                n--;
            } 
        }
        return n == 1;
    }
}

```

## Python Solution

```python

class Solution:
    def validTree(self, n, edges):
        if n != len(edges) + 1:
            return False
        par = [i for i in range(n)]
        for edge in edges:
            par1 = edge[0] 
            par2 = edge[1]
            while par[par1] != par1:
                par1 = par[par1]
            while par[par2] != par2:
                par2 = par[par2]
            if par1 != par2:
                par[par2] = par1
                n -= 1
        return n == 1 

```




