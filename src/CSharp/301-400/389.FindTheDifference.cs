
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.FindTheDifference
{
public class Solution {
    public char FindTheDifference(string s, string t) {
        var res = 0;
        foreach(var c in s)
            res -= c;
        foreach(var c in t)
            res += c;
        return (char)res;
    }
}
}