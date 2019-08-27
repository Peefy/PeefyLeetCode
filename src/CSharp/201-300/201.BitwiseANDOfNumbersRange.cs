
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.BitwiseANDOfNumbersRange
{
public class Solution {
    public int RangeBitwiseAnd(int m, int n) {
        var count = 0;
        while (m != n)
        {
            m >>= 1;
            n >>= 1;
            count += 1;
        }
        return n << count;
    }
}
}