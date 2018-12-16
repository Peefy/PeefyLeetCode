using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.CountPrimeSetBits
{
public class Solution {
    public int CountPrimeSetBits(int L, int R) {
        int[] _primes = new int[]{0, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0};
        int count = 0;
        for (int i = L; i <= R; i++) {
            int bits = 0;
            int n = i;
            while (n > 0){
                n &= (n - 1);
                bits++;
            }
            if (_primes[bits] == 1)
                count += 1;
        }
        return count;
    }
}
}

