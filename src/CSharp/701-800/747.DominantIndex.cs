using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.DominantIndex
{
public class Solution {
    public int DominantIndex(int[] nums) {
        int maxnum = -1;
        int secondmaxnum = -1;
        int maxindex = 0;
        for (int i = 0; i < nums.Length; i++) {
            int num = nums[i];
            if (num > maxnum){
                secondmaxnum = maxnum;
                maxnum = num;
                maxindex = i;
            }
            else if (num > secondmaxnum)
                secondmaxnum = num;
        }
        return maxnum >= 2 * secondmaxnum ? maxindex : -1;
    }
}
}

