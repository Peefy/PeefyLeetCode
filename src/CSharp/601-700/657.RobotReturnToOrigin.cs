
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.JudgeCircle
{
    public class Solution
    {
        public bool JudgeCircle(string moves)
        {
            int lcount = 0;
            int rcount = 0;
            int ucount = 0;
            int dcount = 0;
            foreach (char c in moves)
            {
                if (c == 'L')
                    lcount++;
                else if (c == 'R')
                    rcount++;
                else if (c == 'U')
                    ucount++;
                else if (c == 'D')
                {
                    dcount++;
                }
            }
            return lcount == rcount && ucount == dcount;
        }
    }
}

