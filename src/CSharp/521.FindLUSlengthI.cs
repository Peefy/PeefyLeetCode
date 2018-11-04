using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FindLUSlength
{
public class Solution {
    public int FindLUSlength(string a, string b) {
        return a == b ? -1 : Math.Max(a.Length, b.Length);
    }
}
}