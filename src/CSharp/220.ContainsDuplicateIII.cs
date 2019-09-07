
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ContainsDuplicateIII
{
public class Solution {
    public bool ContainsNearbyAlmostDuplicate(int[] nums, int k, int t) {
        if (t < 0)
            return false;
        var n = nums.Length;
        var d = new Dictionary<long, long>();
        var w = t + 1;
        for (int i = 0; i < n; i++)
        {
            var m = nums[i] / w;
            if (d.ContainsKey(m) == true)
                return true;
            if (d.ContainsKey(m - 1) && Math.Abs(nums[i] - d[m - 1]) < w)
                return true;
            if (d.ContainsKey(m + 1) && Math.Abs(nums[i] - d[m + 1]) < w)
                return true;
            d.Add(m, nums[i]);
            if (i >= k)
                d.Remove(nums[i - k] / w);
        }
        return false;
    }
}
}