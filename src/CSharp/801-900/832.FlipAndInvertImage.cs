
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FlipAndInvertImage
{
public class Solution {
    public int[][] FlipAndInvertImage(int[][] A) {
        for(int i = 0; i < A.GetLength(0); i++){
            Array.Reverse(A[i]);
            for (int j = 0; j < A[0].Length; j++){
                A[i][j] = 1 - A[i][j];
            }
        }
        return A;
    }
}
}

