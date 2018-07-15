using System;

namespace PeefyLeetCode.Rob {
public class Solution {
    public int Rob(int[] nums) {
        int n = nums.Length;
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];
        if (n == 2)
            return Math.Max(nums[0], nums[1]);
        int[] prices = new int[n];
        prices[0] = nums[0];
        prices[1] = Math.Max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            prices[i] = Math.Max(nums[i] + prices[i - 2], prices[i - 1]);
        } 
        return prices[n - 1];
    }
}
}