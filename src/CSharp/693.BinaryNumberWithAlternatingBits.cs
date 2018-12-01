
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.HasAlternatingBits
{
    public class Solution
    {
        public bool HasAlternatingBits(int n)
        {
            int eq = n & 1;
            while (n > 0)
            {
                n >>= 1;
                if (eq == (n & 1))
                    return false;
                eq = n & 1;
            }
            return true;
        }
    }
}

