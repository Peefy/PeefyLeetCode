using System;
using System.Collections.Generic;

namespace PeefyLeetCode.StringIsAnagram
{
public class Solution {
    public bool IsAnagram(string s, string t) {
        int ret = 0;
        int s_times = 1;
        int t_times = 1;

        for (int i = 0; i < s.Length; i++)
        {
            int c = s[i] - 'a';
            ret ^= c;
            s_times *= c;
        }

        for (int i = 0; i < t.Length; i++)
        {
            int c = t[i] - 'a';
            ret ^= c;
            t_times *= c;
        }
        return ret == 0 && s_times == t_times;
    }
}
}