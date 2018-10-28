using System;
using System.Collections.Generic;

namespace PeefyLeetCode.PoorPigs
{

public class Solution {
    public int PoorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if (buckets == 1)
            return 0;
        int s = minutesToTest / minutesToDie + 1;
        int r = 1;
        for (int i = 1;i < 100000;i++)
        {
            r *= s;
            if (r >= buckets)
                return i;
        }
        return 0;
    }
}

}