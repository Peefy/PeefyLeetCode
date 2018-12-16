using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.IsToeplitzMatrix
{
public class Solution {
    public bool IsToeplitzMatrix(int[,] a) {
        for (int i = 0; i < a.GetLength(0) - 1; i++){
            for (int j = 0; j < a.GetLength(1) - 1; j++){
                if (a[i, j] != a[i + 1, j + 1]){
                    return false;
                }
            }
        }
        return true;
    }
}
}

