
# Problem 63 : UniquePathsII

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/1-100/63.UniquePathsII/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int w = obstacleGrid.size();
        if(w == 0 ) return 0;
        int h = obstacleGrid[0].size();
        long long  dp[w][h];
        dp[0][0] = obstacleGrid[0][0] == 0 ? 1 : 0;
        for(int i = 1;i< w;++i){
            dp[i][0]  =  obstacleGrid[i][0] == 1 ? 0 : dp[i-1][0];
        }
        for(int j = 1;j< h;++j){
            dp[0][j]  =  obstacleGrid[0][j] == 1 ? 0 : dp[0][j-1];
        }
        for(int i = 1;i< w;++i){
            for(int j = 1;j<h;++j){
                dp[i][j]  =  obstacleGrid[i][j] == 1 ? 0 : dp[i][j-1] + dp[i-1][j];
            }
        }
        return dp[w-1][h-1];
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int UniquePathsWithObstacles(int[][] obstacleGrid) {
        int R = obstacleGrid.Length;
        int C = obstacleGrid[0].Length;
        if (obstacleGrid[0][0] == 1) {
            return 0;
        }
        obstacleGrid[0][0] = 1;
        for (int i = 1; i < R; i++) {
            obstacleGrid[i][0] = (obstacleGrid[i][0] == 0 && obstacleGrid[i - 1][0] == 1) ? 1 : 0;
        }
        for (int i = 1; i < C; i++) {
            obstacleGrid[0][i] = (obstacleGrid[0][i] == 0 && obstacleGrid[0][i - 1] == 1) ? 1 : 0;
        }
        for (int i = 1; i < R; i++) {
            for (int j = 1; j < C; j++) {
                if (obstacleGrid[i][j] == 0) {
                    obstacleGrid[i][j] = obstacleGrid[i - 1][j] + obstacleGrid[i][j - 1];
                } else {
                    obstacleGrid[i][j] = 0;
                }
            }
        }
        return obstacleGrid[R - 1][C - 1];
    }
}

```

## Java Solution

```java

class Solution {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int R = obstacleGrid.length;
        int C = obstacleGrid[0].length;
        if (obstacleGrid[0][0] == 1) {
            return 0;
        }
        obstacleGrid[0][0] = 1;
        for (int i = 1; i < R; i++) {
            obstacleGrid[i][0] = (obstacleGrid[i][0] == 0 && obstacleGrid[i - 1][0] == 1) ? 1 : 0;
        }
        for (int i = 1; i < C; i++) {
            obstacleGrid[0][i] = (obstacleGrid[0][i] == 0 && obstacleGrid[0][i - 1] == 1) ? 1 : 0;
        }
        for (int i = 1; i < R; i++) {
            for (int j = 1; j < C; j++) {
                if (obstacleGrid[i][j] == 0) {
                    obstacleGrid[i][j] = obstacleGrid[i - 1][j] + obstacleGrid[i][j - 1];
                } else {
                    obstacleGrid[i][j] = 0;
                }
            }
        }
        return obstacleGrid[R - 1][C - 1];
    }
}

```

## Python Solution

```python

class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid) -> int:
        m = len(obstacleGrid)
        n = len(obstacleGrid[0])
        if obstacleGrid[0][0] == 1:
            return 0
        obstacleGrid[0][0] = 1
        for i in range(1,m):
            obstacleGrid[i][0] = int(obstacleGrid[i][0] == 0 and obstacleGrid[i-1][0] == 1)
        for j in range(1, n):
            obstacleGrid[0][j] = int(obstacleGrid[0][j] == 0 and obstacleGrid[0][j-1] == 1)
        for i in range(1,m):
            for j in range(1,n):
                if obstacleGrid[i][j] == 0:
                    obstacleGrid[i][j] = obstacleGrid[i-1][j] + obstacleGrid[i][j-1]
                else:
                    obstacleGrid[i][j] = 0
        return obstacleGrid[m-1][n-1]

```


