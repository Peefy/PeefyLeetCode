
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.HammingDistance
{

public class Solution {
    public int HammingDistance(int x, int y) {
        int res = 0, exc = x ^ y;
        while (exc != 0) {
            ++res;
            exc &= (exc - 1);
        }
        return res;
    }
}

}
