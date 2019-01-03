
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.SortArrayByParityII
{
public class Solution {
    public int[] SortArrayByParityII(int[] A) {
        int[] temp = new int[A.Length];
        int i = 0;
        int j = 1;
        foreach (int num in A) {
            if ((num & 1) == 1) {
                temp[j] = num;
                j += 2;
            } else {
                temp[i] = num;
                i += 2;
            }
        }
        return temp;
    }
}
}

