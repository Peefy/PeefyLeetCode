
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.ImageSmoother
{
public class Solution {
    public int[,] ImageSmoother(int[,] M) {
        int m = M.GetLength(0);
        int n = M.GetLength(1);
        int[,] N = new int[m, n];
        for (int i = 0;i < m;++i)
            for (int j = 0;j < n;++j){
                int count = 1;
                N[i,j] = M[i,j];
                if (i - 1 >= 0 && j - 1 >= 0){
                    N[i,j] += M[i - 1,j - 1]; count += 1;
                }  
                if (i - 1 >= 0 && j + 1 < n){
                    N[i,j] += M[i - 1,j + 1]; count += 1;
                }       
                if (j - 1 >= 0){
                    N[i,j] += M[i,j - 1]; count += 1;
                }
                if (j + 1 < n){
                    N[i,j] += M[i,j + 1]; count += 1;
                }    
                if (i + 1 < m && j + 1 < n){
                    N[i,j] += M[i + 1,j + 1]; count += 1;
                }
                if (i + 1 < m && j - 1 >= 0){
                    N[i,j] += M[i + 1,j - 1]; count += 1;
                }
                if (i + 1 < m){
                    N[i,j] += M[i + 1,j]; count += 1;
                }
                if (i - 1 >= 0){
                    N[i,j] += M[i - 1,j]; count += 1;
                }
                N[i,j] /= count;
            }
        return N;
    }
}
}

