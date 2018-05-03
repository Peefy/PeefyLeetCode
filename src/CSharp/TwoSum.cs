
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

namespace TwoSumSolution
{
    public class Solution
    {
        public int[] TwoSum(int[] nums, int target) 
        {      
            var dict = new Dictionary<int, int>();
            for (int i = 0; i < nums.Length; i++)
            {
                if(dict.TryGetValue(target - nums[i], out var j) == true)
                {
                    var result = new int[]{0, 0};
                    result[0] = j;
                    result[1] = i;
                    return result;
                }
                if(dict.ContainsKey(nums[i]) == false)
                {
                    dict.Add(nums[i], i);
                }
            }    
            return null;    
        }

    }
}
