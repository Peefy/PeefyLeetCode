
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.BinaryGap
{
public class Solution {
    public int BinaryGap(int N) {
        int longest = 0, cur = -10000;
        while (N != 0) {
            if (N % 2 == 1) {
                ++cur;
                if (cur > longest)
                    longest = cur;
                cur = 0;
            } else {
                ++cur;
            }
            N >>= 1;
        }
        return longest;
    }
}
}

