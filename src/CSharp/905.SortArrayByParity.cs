
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.SortArrayByParity
{
    public class Solution
    {
        public int[] SortArrayByParity(int[] A)
        {
            int p1 = 0, p2 = A.Length - 1;
            int tmp;
            while (p1 < p2)
            {
                while (p1 < p2 && (A[p1] & 1) == 0)
                {
                    p1 = p1 + 1;
                }
                while (p1 < p2 && (A[p2] & 1) != 0)
                {
                    p2 = p2 - 1;
                }
                tmp = A[p1];
                A[p1] = A[p2];
                A[p2] = tmp;
            }
            tmp = A[p1];
            A[p1] = A[p2];
            A[p2] = tmp;
            return A;
        }
    }
}

