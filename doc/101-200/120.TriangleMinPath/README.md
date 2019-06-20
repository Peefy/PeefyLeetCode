
# problem 120 : TriangleMinPath

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/120.TriangleMinPath/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        if (n == 0)
            return 0;
        auto res = *triangle.end();
        for (int i = n - 2; i > -1; i--) {
            int ni = triangle[i].size();
            for (int j = 0; j < ni; j++) {
                res[j] = min(res[j], res[j + 1]) + triangle[i][j];
            }
        }            
        return res[0];
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int MinimumTotal(IList<IList<int>> triangle) {
        int n = triangle.Count;
        if (n == 0)
            return 0;
        int[] res = new int[n];
        for (int i = 0; i < n; i++) {
            res[i] = triangle[n - 1][i];
        }
        for (int i = n - 2; i > -1; i--) {
            int ni = triangle[i].Count;
            for (int j = 0; j < ni; j++) {
                res[j] = Math.Min(res[j], res[j + 1]) + triangle[i][j];
            }
        }            
        return res[0];
    }
}

```

## Java Solution

```java

class Solution {
    public int minimumTotal(List<List<Integer>> triangle) {
        int n = triangle.size();
        if (n == 0)
            return 0;
        int[] res = new int[n];
        for (int i = 0; i < n; i++) {
            res[i] = triangle.get(n - 1).get(i);
        }
        for (int i = n - 2; i > -1; i--) {
            int ni = triangle.get(i).size();
            for (int j = 0; j < ni; j++) {
                res[j] = Math.min(res[j], res[j+1]) + triangle.get(i).get(j);
            }
        }            
        return res[0];
    }
}

```

## Python Solution

```python

class Solution:
    def minimumTotal(self, triangle):
        n = len(triangle)
        if n == 0:
            return 0
        dp = [0] * n
        for i in range(n):
            tmp = [0] * n
            for j in range(0, i + 1):
                if j == 0:
                    tmp[j] = dp[j] + triangle[i][j]
                elif j == i:
                    tmp[j] = dp[j - 1] + triangle[i][j]
                else:       
                    tmp[j] = triangle[i][j] + min(dp[j - 1], dp[j])
            dp = tmp
        return min(dp)


```


