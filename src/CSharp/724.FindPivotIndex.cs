using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.PivotIndex
{
    public class Solution
    {
        public int PivotIndex(int[] nums)
        {
            if (nums.Length == 1)
                return 0;
            int right = 0;
            foreach (var i in nums)
            {
                right += i;
            }
            int left = 0;
            for (int i = 0; i < nums.Length; ++i)
            {
                left += nums[i];
                if (right == left)
                    return i;
                right -= nums[i];
            }
            return -1;
        }
    }
}

