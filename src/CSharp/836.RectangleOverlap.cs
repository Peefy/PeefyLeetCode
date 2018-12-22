
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.IsRectangleOverlap
{
public class Solution {
    public bool IsRectangleOverlap(int[] rec1, int[] rec2) {
        return ((long)rec2[0] - (long)rec1[2]) * ((long)rec2[2] - (long)rec1[0]) < 0 && (
            (long)rec2[1] - (long)rec1[3]) * ((long)rec2[3] - (long)rec1[1]) < 0;    
    }
}
}

