
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FindMaxAverage
{
public class Solution {
    public double FindMaxAverage(int[] nums, int k) {
        int n = nums.Length;
        int maxsum = 0;
        for (int i = 0; i < k; i++) {
            maxsum += nums[i];
        }
        int lastsum = maxsum;
        for (int i = k; i < n; i++){
            int nowsum = lastsum - nums[i - k] + nums[i];
            maxsum = Math.max(nowsum, maxsum);
            lastsum = nowsum;
        }
        return maxsum / (double)k;
    }
}
}

