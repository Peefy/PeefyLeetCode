
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.CountBinarySubstrings
{
public class Solution {
    public int CountBinarySubstrings(string s) {
        int res = 0, preLen = 0, curLen = 1;
        for (int i = 1; i < s.Length; i++){
            if (s[i] == s[i - 1])
                curLen += 1;
            else{
                preLen = curLen;
                curLen = 1;
            }
            if (preLen >= curLen)
                res += 1;
        }
        return res;
    }
}
}

