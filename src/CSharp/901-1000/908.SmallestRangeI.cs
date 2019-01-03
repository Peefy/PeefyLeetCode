
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.SmallestRangeI
{
public class Solution {
    public int SmallestRangeI(int[] A, int K) {
        int maxv = 0;
        int minv = 10000;
        foreach (int a in A){
            maxv = Math.Max(a, maxv);
            minv = Math.Min(a, minv);
        }
        return Math.Max(0, maxv - minv - 2 * K);
    }
}
}

