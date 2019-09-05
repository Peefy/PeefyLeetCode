
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.HouseRobberII
{
public class Solution {
    public int Rob(int[] nums) {
        int n = nums.Length;
        if (n == 1)
            return nums[0];
        int[] dpa = new int[n + 1];
        int[] dpb = new int[n + 1];
        for (int i = 2; i < n + 1; i++) {
            dpa[i] = Math.Max(dpa[i - 1], dpa[i - 2] + nums[i - 2]);
            dpb[i] = Math.Max(dpb[i - 1], dpb[i - 2] + nums[i - 1]);
        }
        return Math.Max(dpa[n], dpb[n]);
    }
}
}