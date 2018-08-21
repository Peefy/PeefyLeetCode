using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ValidPerfectSquare
{
public class Solution {
    public bool IsPerfectSquare(int num) {
        long x = num;
        while(x * x > num)
        {
            x = (x + num / x) / 2;
        }
        return (int)(x * x) == num;
    }
}
}