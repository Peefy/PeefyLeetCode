using System;
using System.Collections.Generic;

namespace PeefyLeetCode.IsPowerOfTwo
{
public class Solution {
    public bool IsPowerOfTwo(int n) {
        if (n <= 0)
        {
            return false;
        }
        return (n & (n - 1)) == 0;
    }
}
}