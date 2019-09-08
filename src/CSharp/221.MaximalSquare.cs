
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.MaximalSquare
{
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
}