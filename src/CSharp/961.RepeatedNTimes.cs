
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.VerifyingAnAlienDictionary
{
public class Solution {
    public int RepeatedNTimes(int[] A) {
        HashSet<int> set = new HashSet<int>();
        for (int i = 0; i < A.Length; ++i) {
            if (set.Contains(A[i])) {
                return A[i];
            }
            else
                set.Add(A[i]);
        }
        return 0;
    }
}
}

