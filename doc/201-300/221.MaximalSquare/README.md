
# problem 221 : MaximalSquare

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/221.MaximalSquare/problem.png"/>

## C++ Solution

```c++

// dp(i, j) = min(dp(i - 1, j), dp(i, j - 1), dp(i - 1, j - 1)) + 1 if matrix[i - 1][j - 1] == '1'
// maxn = max(maxn, dp(i , j))


class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int rows = matrix.size();
        if (rows == 0)
            return 0;
        int cols = matrix[0].size();
        int maxn = 0;
        vector<vector<int>> dp(rows + 1, vector<int>(cols + 1, 0));
        for (size_t i = 1; i <= rows; i++){
            for (size_t j = 1; j <= cols; j++){
                if (matrix[i - 1][j - 1] == '1'){
                    dp[i][j] = min(min(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + 1;
                    maxn = max(dp[i][j], maxn);
                }
            }      
        }
        return maxn * maxn;
    }
};

```

## C# Solution

```csharp

public class Solution {
    public int MaximalSquare(char[][] matrix) {
        int rows = matrix.Length;
        if (rows == 0)
            return 0;
        int cols = matrix[0].Length;
        int[] dp = new int[cols + 1];
        int prev = 0;
        int maxn = 0;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= cols; j++) {
                int temp = dp[j];
                if (matrix[i - 1][j - 1] == '1'){
                    dp[j] = Math.Min(Math.Min(dp[j - 1], prev), dp[j]) + 1; 
                    maxn = Math.Max(maxn, dp[j]);
                }
                else
                    dp[j] = 0;
                prev = temp;
            }
        }
        return maxn * maxn;
    }
}

```

## Java Solution

```java

class Solution {
    public int maximalSquare(char[][] matrix) {
        int rows = matrix.length;
        if (rows == 0)
            return 0;
        int cols = matrix[0].length;
        int[] dp = new int[cols + 1];
        int prev = 0;
        int maxn = 0;
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= cols; j++) {
                int temp = dp[j];
                if (matrix[i - 1][j - 1] == '1'){
                    dp[j] = Math.min(Math.min(dp[j - 1], prev), dp[j]) + 1; 
                    maxn = Math.max(maxn, dp[j]);
                }
                else
                    dp[j] = 0;
                prev = temp;
            }
        }
        return maxn * maxn;
    }
}

```

## Python Solution

```python

class Solution:
    def maximalSquare(self, matrix):
        rows = len(matrix)
        if rows == 0:
            return 0
        cols = len(matrix[0])
        dp = [0] * (cols + 1)
        maxsqlen = 0
        prev = 0
        for i in range(1, rows + 1):
            for j in range(1, cols + 1):
                temp = dp[j]
                if matrix[i - 1][j - 1] == '1':
                    dp[j] = min(min(dp[j - 1], prev), dp[j]) + 1
                    maxsqlen = max(maxsqlen, dp[j])
                else:
                    dp[j] = 0
                prev = temp
        return maxsqlen * maxsqlen 

```




