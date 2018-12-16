using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.SelfDividingNumbers
{
public class Solution {
    public IList<int> SelfDividingNumbers(int left, int right) {
        var res = new List<int>();
        for (int i = left; i <= right; i++) {
            int j = i;
            while (j > 0){
                int d = j % 10;
                if (d == 0) {
                    break;
                }
                if (i % d != 0){
                    break;
                }
                j /= 10;
            }
            if (j == 0)
                res.Add(i);
        }
        return res;
    }
}
}

