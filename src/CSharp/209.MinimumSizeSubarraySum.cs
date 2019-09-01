
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.MinimumSizeSubarraySum
{
public class Solution {
    public int MinSubArrayLen(int s, int[] nums) {
        int n = nums.Length;
        int ans = int.MaxValue;
        int left = 0;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            while (sum >= s) {
                ans = Math.Min(ans, i + 1 - left);
                sum -= nums[left++];
            }
        }
        return (ans != int.MaxValue) ? ans : 0;
    }
}
}