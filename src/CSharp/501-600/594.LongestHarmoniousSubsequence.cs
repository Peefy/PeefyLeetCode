

using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.LongestHarmoniousSubsequence
{
    public class Solution
    {
        public int FindLHS(int[] nums)
        {
            if (nums == null || nums.Length == 0 || nums.Length == 1)
            {
                return 0;
            }
            Array.Sort(nums);
            int max = 0, temp = nums[0], begin = 0, index = 0;
            bool isStart = true;
            for (int i = 1; i <= nums.Length; i++)
            {
                if (i == nums.Length || nums[i] != temp)
                {
                    if (!isStart)
                    {
                        max = max > (i - begin) ? max : (i - begin);
                        begin = index;
                    }
                    if (i == nums.Length) break;
                    if (nums[i] - temp == 1)
                    {
                        isStart = false;
                    }
                    else
                    {
                        isStart = true;
                        begin = i;
                    }
                    temp = nums[i];
                    index = i;
                }
            }
            return max;
        }
    }
}
