
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.MonotonicArray
{
public class Solution {
    public bool IsMonotonic(int[] A) {
         return increasing(A) || decreasing(A);
    }

    public bool increasing(int[] A) {
        for (int i = 0; i < A.Length - 1; ++i)
            if (A[i] > A[i+1]) return false;
        return true;
    }

    public bool decreasing(int[] A) {
        for (int i = 0; i < A.Length - 1; ++i)
            if (A[i] < A[i+1]) return false;
        return true;
    }
}
}

