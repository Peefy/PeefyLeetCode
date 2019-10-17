
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.PerfectSquares
{

public class Solution {
    public int NumSquares(int n) {
        int[] dp = new int[n + 1]; 
        for (int i = 1; i <= n; i++) {
            dp[i] = i; 
            for (int j = 1; i - j * j >= 0; j++) { 
                dp[i] = Math.Min(dp[i], dp[i - j * j] + 1); 
            }
        }
        return dp[n];
    }
}

}