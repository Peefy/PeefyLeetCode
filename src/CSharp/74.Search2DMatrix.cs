using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.SearchMatrix
{
public class Solution {
    public bool SearchMatrix(int[][] matrix, int target) {
        int m = matrix.Length;
        if (m == 0){
            return false;
        }
        int n = matrix[0].Length;
        int left = 0;
        int right = m * n - 1;
        while (left <= right){
            int middle = (left + right) / 2;
            int element = matrix[middle / n][middle % n];
            if (element == target)
                return true;
            else if (element < target)
                left = middle + 1;
            else if (element >target)
                right = middle - 1;
        }
        return false;
    }
}
}