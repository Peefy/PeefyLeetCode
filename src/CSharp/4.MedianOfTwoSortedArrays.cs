using System.Collections.Generic;

namespace PeefyLeetCode.MedianOfTwoSortedArrays
{
    public class Solution
    {
        public double FindMedianSortedArrays(int[] nums1, int[] nums2)
        {
            var nums = new List<int>();
            nums.AddRange(nums1);
            nums.AddRange(nums2);
            nums.Sort();
            var n = nums.Count;
            return (nums[n / 2] + nums[(n - 1) / 2]) / 2.0;
        }
    }
}