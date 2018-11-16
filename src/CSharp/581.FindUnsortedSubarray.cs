
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FindUnsortedSubarray
{
    public class Solution
    {
        public int FindUnsortedSubarray(int[] nums)
        {
            int n = nums.Length;
            int left = 0;
            int right = n - 1;
            while (left < n - 1 && nums[left] <= nums[left + 1])
                left += 1;
            if (left == n - 1)
                return 0;
            while (right > 0 && nums[right] >= nums[right - 1])
                right -= 1;
            int min_value = int.MaxValue;
            int max_value = int.MinValue;
            for (int i = left; i < right + 1; i++)
            {
                min_value = Math.Min(nums[i], min_value);
                max_value = Math.Max(nums[i], max_value);
            }
            while (left > -1 && nums[left] > min_value)
                left -= 1;
            while (right < n && nums[right] < max_value)
                right += 1;
            return right - left - 1;
        }
    }
}

