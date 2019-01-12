
using System;
using System.Diagnostics.Contracts;

namespace PeefyLeetCode.LengthOfLongestSubstring
{
public class Solution {
    public int LengthOfLongestSubstring(string s) {
        int[] hax = new int[128];
        Array.Fill(hax, -1);
        int res = 0;
        int left = -1;
        for(int i = 0; i < s.Length; ++i){
            left = Math.Max(left, hax[s[i]]);
            hax[s[i]] = i;
            res = Math.Max(i - left, res);
        }
        return res;
    }
}
}