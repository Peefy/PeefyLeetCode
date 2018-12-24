
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FairCandySwap
{
public class Solution {
    public int[] FairCandySwap(int[] A, int[] B) {
        HashSet<int> setB = new HashSet<int>();
        int sumA = 0, sumB = 0;
        foreach (int a in A){
            sumA += a;
        }
        foreach (int b in B){
            sumB += b;
            setB.Add(b);
        }
        int sub = (sumA - sumB) / 2;
        foreach (int a in A){
            if (setB.Contains(a - sub) == true){
                return new int[] {a, a - sub};
            }
        }
        return new int[] {0, 0 - sub};
    }
}
}

