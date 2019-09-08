
import java.util.List;
import java.util.TreeSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;

// dp(i, j) = min(dp(i - 1, j), dp(i, j - 1), dp(i - 1, j - 1)) + 1 if matrix[i - 1][j - 1] == '1'
// maxn = max(maxn, dp(i , j))

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

