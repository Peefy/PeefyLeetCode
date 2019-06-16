using System;
using System.Collections.Generic;

namespace PeefyLeetCode.SearchRange
{
public class Solution {
    public int[] SearchRange(int[] nums, int target) {
        int lo = 0;
        int hi = nums.Length;
        while(lo < hi){
            int mid = (lo + hi) >> 1;
            if (target > nums[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        if (lo == nums.Length || nums[lo] != target)
            return new int[]{-1, -1};
        int left = lo;
        lo = 0;
        hi = nums.Length;
        while(lo < hi){
            int mid = (lo + hi) >> 1;
            if (target > nums[mid] || target == nums[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        return new int[]{left, lo - 1};
    }
}
}