using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.CountAndSay
{
    public class Solution
    {
        public string CountAndSay(int n)
        {
            string s = "";
            if (n <= 1)
            {
                return "1";
            }
            else
            {
                s = CountAndSay(n - 1);
                if (s == "1")
                {
                    return "11";
                }
                var len = s.Length;
                var count = 0;
                var first = s[0];
                var i = 0;
                var returnStr = "";
                while (i < len)
                {
                    if (first == s[i])
                        count += 1;
                    else
                    {
                        returnStr += $"{count}{first}";
                        first = s[i];
                        count = 1;
                    }        
                    i += 1;
                }
                returnStr += $"{count}{first}";
                return returnStr;
            }
        }
    }
}