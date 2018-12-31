
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ValidMountainArray
{
public class Solution {
    public bool ValidMountainArray(int[] A) {
        int asc = 0; 
        int desc = 0;
        for(int i = 1; i < A.Length; i++){
            if (A[i - 1] < A[i]){
                if (desc == 0)
                    asc += 1;
            }
            else if (A[i - 1] > A[i])
                desc += 1;
        }
        return asc > 0 && desc > 0 && asc + desc + 1 == A.Length;
    }
}
}

