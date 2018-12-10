using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.ReachNumber
{
public class Solution {
    public int ReachNumber(int target) {
        target = Math.Abs(target);
        int n = (int)Math.Ceiling((-1.0 + Math.Sqrt(1 + 8.0 * target)) / 2);
        if ((n * (n + 1) / 2) == target)
            return n;
        int d = (n * (n + 1) / 2) - target;
        if ((d & 1) == 0)
            return n;
        return (n & 1) > 0 ? n + 2 : n + 1;
    }
}
}

