
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.UglyNumberII
{

    public class Solution
    {
        public int NthUglyNumber(int n)
        {
            int[] dp = new int[n];
            dp[0] = 1;
            int p2 = 0, p3 = 0, p5 = 0;
            for (int i = 1; i < n; i++)
            {
                dp[i] = Math.Min(dp[p2] * 2, dp[p3] * 3);
                dp[i] = Math.Min(dp[i], dp[p5] * 5);
                if (dp[i] >= dp[p2] * 2)
                    p2 += 1;
                if (dp[i] >= dp[p3] * 3)
                    p3 += 1;
                if (dp[i] >= dp[p5] * 5)
                    p5 += 1;
            }
            return dp[n - 1];
        }
    }
}