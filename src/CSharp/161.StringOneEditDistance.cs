
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.StringOneEditDistance
{

    public class Solution
    {
        public bool IsOneEditDistance(String s, String t)
        {
            char[] sa = s.ToCharArray();
            char[] ta = t.ToCharArray();
            if (Math.Abs(sa.Length - ta.Length) > 1) 
                return false;
            if (sa.Length < ta.Length)
            {
                char[] temp = sa;
                sa = ta;
                ta = temp;
            }
            int i = 0, j = 0;
            int dist = 0;
            while (i < sa.Length || j < ta.Length)
            {
                if (i == sa.Length) { dist++; j++; }
                else if (j == ta.Length) { dist++; i++; }
                else if (sa[i] == ta[j]) { i++; j++; }
                else
                {
                    if (i < sa.Length - 1 && sa[i + 1] == ta[j])
                    {
                        i++;
                    }
                    else
                    {
                        i++;
                        j++;
                    }
                    dist++;
                }
                if (dist > 1) return false;
            }
            return dist == 1;
        }
    }

}


