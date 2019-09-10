
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.RectangleArea
{
public class Solution {
    public int ComputeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        if (E > C || A > G)
            return (C - A) * (D - B) + (G - E) * (H - F);
        if (F > D || H < B)
            return (C - A) * (D - B) + (G - E) * (H - F);
        int length = Math.Min(C, G) - Math.Max(A, E);
        int width = Math.Min(D, H) - Math.Max(B, F);
        return (C - A) * (D - B) + (G - E) * (H - F) - length * width;
    }
}
}