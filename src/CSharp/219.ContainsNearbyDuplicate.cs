using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ContainsNearbyDuplicate
{
    public class Solution
    {
        public bool ContainsNearbyDuplicate(int[] nums, int k)
        {
            Dictionary<int, int> d = new Dictionary<int, int>();
            var n = nums.Length;
            for (int i = 0; i < n; i++)
            {
                if (d.ContainsKey(nums[i]))
                {
                    if(i - d[nums[i]] <= k)
                        return true;
                    else
                        d[nums[i]] = i;
                }
                else
                {
                    d.Add(nums[i], i);
                }
            }
            return false;
        }
    }
}