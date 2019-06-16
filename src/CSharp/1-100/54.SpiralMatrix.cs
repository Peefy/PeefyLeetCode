using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.SpiralMatrix
{
public class Solution {
    public IList<int> SpiralOrder(int[,] matrix) {
        List<int> ans = new List<int>();
        if (matrix.GetLength(0) == 0)
            return ans;    
            int n = matrix.GetLength(0);
            int m = matrix.GetLength(1);
            int i = 0;
            int j = 0;
            int[] lrbound = new int[]{0, m};
            int[] udbound = new int[]{0, n};
            int shunxu = 0;
            while (ans.Count < m * n){
                if (shunxu == 0){
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.Add(matrix[j, i]);
                        i += 1;
                    }
                    j += 1;
                    i -= 1;
                    udbound[0] += 1;
                    shunxu = 1;
                }
                else if (shunxu == 1){
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.Add(matrix[j, i]);
                        j += 1;
                    }
                    i -= 1;
                    j -= 1;
                    lrbound[1] -= 1;
                    shunxu = 2;
                }
                else if (shunxu == 2){
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.Add(matrix[j, i]);
                        i -= 1;
                    }
                    j -= 1;
                    i += 1;
                    udbound[1] -= 1;
                    shunxu = 3;
                }
                else{
                    while (i >= lrbound[0] && i < lrbound[1] && j >= udbound[0] && j < udbound[1]){
                        ans.Add(matrix[j, i]);
                        j -= 1;
                    }
                    i += 1;
                    j += 1;
                    lrbound[0] += 1;
                    shunxu = 0;
                }
            }
        return ans;
    }
}
}