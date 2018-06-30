using System;

namespace PeefyLeetCode.MaxProfit
{
    public class Solution
    {
        public int MaxProfit(int[] prices)
        {
            int n = prices.Length;
            if (n == 0)
                return 0;
            int minprice = prices[0];
            int maxprofit = 0;
            for (int i = 0; i < n; i++)
            {
                minprice = Math.Min(minprice, prices[i]);
                maxprofit = Math.Max(maxprofit, prices[i] - minprice);
            }
            return maxprofit;
        }
    }
}