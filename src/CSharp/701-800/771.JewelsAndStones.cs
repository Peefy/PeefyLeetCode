using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.NumJewelsInStones
{
public class Solution {
    public int NumJewelsInStones(string J, string S) {
        int count = 0;
        int jLen = J.Length;
        int sLen = S.Length;
        int a = 0, b = 0;
        for(; b < sLen; b++) {
            a = 0;
            for(; a < jLen; a++) {
                if(J[a] == S[b]) {
                    count ++;
                    break;
                }
            }
        }
        return count;
    }
}
}

