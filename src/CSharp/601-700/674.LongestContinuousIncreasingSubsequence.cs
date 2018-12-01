
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FindLengthOfLCIS
{
public class Solution {
    public int FindLengthOfLCIS(int[] nums) {
        int count = 0;
        int maxcount = 0;
        int last = -9999999;
        foreach (var num in nums){
            if (num > last)
                count += 1;
            else
                count = 1;
            if (count > maxcount)
                maxcount = count;
            last = num;
        }
        return maxcount; 
    }
}
}

