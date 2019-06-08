
# Problem 62 : UniquePaths

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/62.UniquePaths/problem.png"/>

## C++ Solution

```c++

static int a[101][101] = {0}; 
class Solution{
public:
    int uniquePaths(int m, int n){
        if (m <= 0 || n <= 0)
            return 0;
        else if (m == 1 || n == 1)
            return 1;
        else if (m == 2 && n == 2)
            return 2;
        else if ((m == 3 && n == 2) || (m == 2 && n == 3))
            return 3;
        if (a[m][n] > 0)
            return a[m][n];
        a[m - 1][n] = uniquePaths(m - 1, n);
        a[m][n - 1] = uniquePaths(m, n - 1);
        a[m][n] = a[m - 1][n] + a[m][n - 1];
        return a[m][n];
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int UniquePaths(int m, int n) {
        int[,] dp = new int[n,m];
        for (int i = 0; i < n; ++i) {
            dp[i,m - 1] = 1;
        }
        for (int j = 0; j < m; ++j) {
            dp[n - 1,j] = 1;
        }
        for (int i = n - 2; i >= 0; --i) {
            for (int j = m - 2; j >= 0; --j) {
                dp[i,j] = dp[i + 1,j] + dp[i,j + 1];
            }
        }

        return dp[0,0];
    }
}

```

## Java Solution

```java

class Solution {
    public int uniquePaths(int m, int n) {
        int[][] dp = new int[n][m];
        for (int i = 0; i < n; ++i) {
            dp[i][m - 1] = 1;
        }
        for (int j = 0; j < m; ++j) {
            dp[n - 1][j] = 1;
        }
        for (int i = n - 2; i >= 0; --i) {
            for (int j = m - 2; j >= 0; --j) {
                dp[i][j] = dp[i + 1][j] + dp[i][j + 1];
            }
        }

        return dp[0][0];
    }
}

```

## Python Solution

```python

class Solution:
    store = []
    def solve(self, m, n):
        if m == 1 or n == 1:
            return 1
        elif m == 2 and n == 2:
            return 2
        elif (m == 3 and n == 2) or (m == 2 and n == 3):
            return 3
        if self.store[m][n] > 0:
            return self.store[m][n]
        self.store[m-1][n] = self.solve(m - 1, n)
        self.store[m][n-1] = self.solve(m, n - 1)
        self.store[m][n] = self.store[m-1][n] + self.store[m][n-1]
        return self.store[m][n]

    def uniquePaths(self, m: int, n: int) -> int:
        self.store = [ [0] * (n + 1) for i in range(m + 1)]
        return self.solve(m, n)

```


