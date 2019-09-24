
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.Search2DMatrixII
{

public class Solution {
    public bool SearchMatrix(int[,] matrix, int target) {
        if (matrix == null || matrix.GetLength(0) == 0) {
            return false;
        }
        int row = matrix.GetLength(0);
        int col = matrix.GetLength(1);
        int posX = 0;
        int posY = col - 1;
        while (posX < row && posY >= 0) {
            if (matrix[posX, posY] == target) {
                return true;
            }
            if (matrix[posX, posY] > target) {
                posY--;
            } else {
                posX++;
            }
        }
        return false;
    }
}
}