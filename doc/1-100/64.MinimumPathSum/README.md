
# Problem 64 : MinimumPathSum

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/64.MinimumPathSum/problem.png"/>

## C++ Solution

```c++

class Solution{
public:
    int minPathSum(vector<vector<int>> &grid){
        int line = grid.size();
        int column = grid[0].size();
        for (int i = 1; i < column; i++){
            grid[0][i] += grid[0][i-1];
        }
        for (int i = 1; i < line; i++){
            grid[i][0] += grid[i-1][0];
        }
        for (int i = 1; i < line; i++){
            for (int j = 1; j < column; j++){
                grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[line-1][column-1];
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int MinPathSum(int[][] grid) {
        int line = grid.Length;
        int column = grid[0].Length;
        for (int i = 1; i < column; i++){
            grid[0][i] += grid[0][i-1];
        }
        for (int i = 1; i < line; i++){
            grid[i][0] += grid[i-1][0];
        }
        for (int i = 1; i < line; i++){
            for (int j = 1; j < column; j++){
                grid[i][j] += Math.Min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[line-1][column-1];
    }
}

```

## Java Solution

```java

class Solution {
    public int minPathSum(int[][] grid) {
        int line = grid.length;
        int column = grid[0].length;
        for (int i = 1; i < column; i++){
            grid[0][i] += grid[0][i-1];
        }
        for (int i = 1; i < line; i++){
            grid[i][0] += grid[i-1][0];
        }
        for (int i = 1; i < line; i++){
            for (int j = 1; j < column; j++){
                grid[i][j] += Math.min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[line-1][column-1];
    }
}

```

## Python Solution

```python

class Solution:
    def minPathSum(self, grid) -> int:
        m = len(grid)
        n = len(grid[0])
        dp = [ [0] * (n) for i in range(m)]
        dp[0][0] = grid[0][0]
        for i in range(1, m):
            dp[i][0] = grid[i][0] + dp[i - 1][0]
        for j in range(1, n):
            dp[0][j] = grid[0][j] + dp[0][j - 1]
        for i in range(1, m):
            for j in range(1, n):
                dp[i][j] = min(dp[i][j - 1] + grid[i][j], dp[i - 1][j] + grid[i][j])
        return dp[m - 1][n - 1]

```


