
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FindErrorNums
{
    public class Solution
    {
        public int[] FindErrorNums(int[] nums)
        {
            int[] ans = new int[2];
            var n = nums.Length;
            var map = new bool[n + 1];
            for (int i = 0; i < n; i++)
            {
                if (map[nums[i]] == false)
                    map[nums[i]] = true;
                else
                {
                    ans[0] = nums[i];
                }
            }
            for (int i = 1; i < (n + 1); i++)
            {
                if (map[i] == false)
                {
                    ans[1] = i;
                    break;
                }
            }
            return ans;
        }
    }
}

