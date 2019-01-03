
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.MinDeletionSize
{
public class Solution {
    public int MinDeletionSize(string[] A) {
        int m = A.Length;
        int n = A[0].Length;
        int count = 0;  
        for(int j = 0; j < n; j++){
            bool flag = true;
            for(int i = 0; i < m - 1; i++){
                if (A[i][j] > A[i + 1][j]){
                    flag = false;
                    break;
                }
            }
            if (flag == true)
                count++;
        }
        return n - count;
    }
}
}

