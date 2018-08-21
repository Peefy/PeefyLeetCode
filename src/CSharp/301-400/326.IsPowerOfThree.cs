using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.IsPowerOfThree
{
public class Solution {
    public bool IsPowerOfThree(int n) {
        if (n < 1)
            return false;
        while (n % 3 == 0){ 
            n /= 3;
        }
        return n == 1;
    }
}
}