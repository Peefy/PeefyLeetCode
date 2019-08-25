
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.CompareVersionNumbers
{
public class Solution {
    public int CompareVersion(string version1, string version2) {
        var v1 = version1.Split(".");
        var v2 = version2.Split(".");
        int n = Math.Max(v1.Length, v2.Length);
        for (int i = 0; i < n; i++) {
            int v1_int = i < v1.Length ? int.Parse(v1[i]) : 0;
            int v2_int = i < v2.Length ? int.Parse(v2[i]) : 0;
            if (v1_int == v2_int) continue;
            if (v1_int > v2_int) return 1;
            else return -1;
        }
        return 0;
    }
}
}



