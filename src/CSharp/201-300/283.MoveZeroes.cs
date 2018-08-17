using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.MoveZeroes
{
public class Solution {
    public void MoveZeroes(int[] nums) {
        int j = 0;
        int n = nums.Length;
        for(int i = 0; i < n; i++)
        {
            if (nums[i] != 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ++j;
            }
        }
    }
}
}