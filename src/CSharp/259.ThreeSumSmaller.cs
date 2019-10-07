
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.ThreeSumSmaller
{
    public class Solution
    {
        public int ThreeSumSmaller(int[] nums, int target)
        {
            Array.Sort(nums);
            int count = 0;
            for (int i = 0; i < nums.Length - 2; i++)
            {
                int j = i + 1, k = nums.Length - 1;
                while (j < k)
                {
                    if (nums[i] + nums[j] + nums[k] < target)
                    {
                        count += k - j;
                        j++;
                    }
                    else
                    {
                        k--;
                    }
                }
            }
            return count;
        }
    }
}