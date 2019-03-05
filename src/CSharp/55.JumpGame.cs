using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.JumpGame
{
public class Solution {
    public bool CanJump(int[] nums) {
        int i = nums.Length - 1;
        for(int j = nums.Length - 2; j > -1; j--){
            if (i - j <= nums[j])
                i = j;
        }
        return i == 0;
    }
}
}