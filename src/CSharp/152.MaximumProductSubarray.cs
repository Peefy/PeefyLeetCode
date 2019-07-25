
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.MaximumProductSubarray
{

public class Solution {
    public int MaxProduct(int[] nums) {
        int max = nums[0], min = nums[0], res = nums[0];
        for(int i = 1; i < nums.Length; i++){
            if(nums[i] < 0){
                int tmp = max;
                max = min;
                min = tmp;
            }
            max = Math.Max(nums[i], max * nums[i]);
            min = Math.Min(nums[i], min * nums[i]);
            res = Math.Max(max, res);
        }
        return res;
    }
}

}


