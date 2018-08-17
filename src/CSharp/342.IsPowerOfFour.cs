using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.IsPowerOfFour
{
public class Solution {
    public bool IsPowerOfFour(int num) {
        if (num == 1) 
            return true;
        if (num <= 0)
            return false;
        if ((num & (num-1)) == 0 && (num & 0xAAAAAAAA) == 0)
            return true;
        else
            return false;
    }
}
}