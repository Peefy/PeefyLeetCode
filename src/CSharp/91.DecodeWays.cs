
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.NumDecodings
{
public class Solution {
    public int NumDecodings(string s) {
        int pp = 1;
        int p = (s[0] != '0') ? 1 : 0;
        for (int i = 1; i < s.Length; i++) {
            int twonumber = (s[i - 1] - '0') * 10 + s[i] - '0';
            int onenumber = s[i] - '0';
            int temp = p;
            p = pp * ((twonumber > 9 && twonumber <= 26) ? 1 : 0) + p * (onenumber > 0 ? 1 : 0);
            pp = temp;
        }
        return p;
    }
}
}