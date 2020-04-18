
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.FlipGameII
{

    public class Solution
    {
        public bool CanWin(string s)
        {
            for (int i = 0; i < s.Length - 1; i++)
            {
                if (s[i] == '+' && s[i + 1] == '+')
                {
                    StringBuilder sb = new StringBuilder(s);
                    sb[i] = '-';
                    sb[i + 1] = '-';
                    if (!CanWin(sb.ToString()))
                        return true;
                }
            }
            return false;
        }
    }

}