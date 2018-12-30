
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.TransposeMatrix
{
public class Solution {
    public int[][] Transpose(int[][] A) {
        int[][] result = new int[A[0].Length][];
        for (int j = 0; j < A[0].Length; j++) {
            result[j] = new int[A.Length];
            for (int i = 0; i < A.Length; i++) {
                result[j][i] = A[i][j];
            }
        }
        return result;
    }
}
}

