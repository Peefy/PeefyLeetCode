
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.JudgeSquareSum
{
public class Solution {
    public bool JudgeSquareSum(int c) {
        int i = 2;
        while (i * i <= c){
            int count = 0;
            if (c % i ==0)
                while (c%i ==0){
                    count += 1;
                    c /= i;
                }
                if (i % 4 == 3 && count % 2 != 0)
                    return false;
            i += 1;
        }
        return c % 4 != 3;
    }
}
}

