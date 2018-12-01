
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.NonDecreasingArray
{
public class Solution {
    public bool CheckPossibility(int[] nums) {
        if (nums.Length <= 2)
            return true;
        int count = 1;
        for (int i = 1; i < nums.Length; i++){
            if (nums[i] < nums[i - 1]){
                if (count == 0)
                    return false;
                if (i == 1 || nums[i] >= nums[i - 2])
                    nums[i - 1] = nums[i];
                else
                    nums[i] = nums[i - 1];
                count--;
            }
        }
        return true;
    }
}
}

