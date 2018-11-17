

using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.RangeAdditionII
{
    public class Solution
    {
        public int MaxCount(int m, int n, int[,] ops)
        {
            int minA = m, minB = n;
            for (int i = 0; i < ops.GetLength(0); i++)
            {
                if (minA > ops[i, 0])
                    minA = ops[i, 0];
                if (minB > ops[i, 1])
                    minB = ops[i, 1];
            }
            return minA * minB;
        }
    }
}

