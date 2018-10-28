
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FindMaxConsecutiveOnes
{
public class Solution {
    public int FindMaxConsecutiveOnes(int[] nums) {
        int count = 0, maxcount = 0;
        foreach (var num in nums) {
            if (num == 1) {
                ++count;
            } else {
                maxcount = count > maxcount ? count : maxcount;
                count = 0;
            }
        }
        return count > maxcount ? count : maxcount;
    }
}

}
