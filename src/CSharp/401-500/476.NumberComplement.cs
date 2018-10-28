
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.FindComplement
{

public class Solution {
    public int FindComplement(int num) {
        int r = 0;
        int n = 0;
        while (num > 0){
            var bit = num & 0x01;
            if (bit == 1)
                (r) &= ~(1<<(n));
            else  
                (r) |=  (1<<(n));
            ++n;
            num >>= 1;
        }
        return r;
    }
}

}
