using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.WordPattern
{
    public class Solution {
    public bool WordPattern(string pattern, string str) {
        str = str.Replace(' ', '|');
        String[] strs = str.Split("|");
        int strscount = strs.Length;
        int pcount = pattern.Length;
        if (strscount != pcount)
            return false;
        var hash = new Dictionary<char, string>();
        for (int i = 0; i < pcount; i++) {
            char c = pattern[i];
            String s = strs[i];
            if (hash.ContainsKey(c) == false){
                if (hash.ContainsValue(s) == true) {
                    return false;
                }
                hash.Add(c, s);
            }
            else{
                if (hash[c] != s)
                    return false;
            }
        }
        return true;
    }
}
}