using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.SpiralMatrixII
{
public class Solution {
    public int[,] GenerateMatrix(int n) {
        int row_start = 0;
        int row_end = n - 1;
        int col_start = 0;
        int col_end = n - 1;
        int[,] result = new int[n,n];
        int count = 1;
        while (row_start <= row_end && col_start <= col_end){
            for (int i = col_start;i < col_end + 1;i++){
                result[row_start,i] = count;
                count += 1;
            }
            row_start += 1;
            for (int i = row_start;i < row_end + 1;i++){
                result[i,col_end] = count;
                count += 1;
            }
            col_end -= 1;
            for (int i = col_end;i > col_start - 1;i--){
                result[row_end,i] = count;
                count += 1;
            }
            row_end -= 1;
            for (int i = row_end;i > row_start - 1;i--){
                result[i,col_start] = count;
                count += 1;
            }
            col_start += 1;
        }
        return result;
    }
}
}