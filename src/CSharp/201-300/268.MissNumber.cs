using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.MissNumber
{
public class Solution {
    public int MissingNumber(int[] nums) {
        return nums.Length * (nums.Length + 1) / 2 - nums.Sum();
    }
}
}