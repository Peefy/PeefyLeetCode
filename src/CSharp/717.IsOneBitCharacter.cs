using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.IsOneBitCharacter
{
public class Solution {
    public bool IsOneBitCharacter(int[] bits) {
        int size = bits.Length;
        int i = 0;
        for(; i < size - 1; ++i){
            if (bits[i] == 1)
                ++i;
        }
        return i == size - 1;
    }
}
}

