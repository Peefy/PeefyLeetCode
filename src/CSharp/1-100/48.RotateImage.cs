using System;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.RotateImage
{
public class Solution {
    public void Rotate(int[,] matrix) {
        int n = matrix.GetLength(0);
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                var tmp = matrix[i, j];
                matrix[i, j] = matrix[j, i];
                matrix[j, i] = tmp;
            }
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n / 2; j++){
                var tmp = matrix[i, j];
                matrix[i, j] = matrix[i,n-j-1];
                matrix[i, n-j-1] = tmp;
            }
        } 
    }
}
}