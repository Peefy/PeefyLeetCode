
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.ArrayPairSum
{
public class Solution {
    public int ArrayPairSum(int[] nums) {
        Array.Sort(nums);
        for (int i = 2; i < nums.Length; i += 2) {
            nums[0] += nums[i];
        }
        return nums[0];
    }
}
}

