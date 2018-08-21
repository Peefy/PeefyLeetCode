using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.ReverseString
{
public class Solution {
    public string ReverseString(string s) {
        return new string(s.Reverse().ToArray());
    }
}
}