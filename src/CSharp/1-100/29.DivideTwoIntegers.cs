using System;
using System.Collections.Generic;

namespace PeefyLeetCode.DivideTwoIntegers
{
    public class Solution
    {
        public int Divide(int dividend, int divisor)
        {
            if (divisor == 0)
                return 0;
            int max = int.MaxValue;
            int min = int.MinValue;
            long divid = (long)dividend;
            long divi = (long)divisor;
            if (divi == 1)
                return (int)divid;
            if (divi == -1)
            {
                if (divid <= min)
                    return max;
                return (int)-divid;
            }
            bool flag = true;
            if (divid < 0)
            {
                divid = -divid;
                if (divi < 0)
                {
                    divi = -divi;
                }
                else
                {
                    flag = false;
                }
            }
            else if (divi < 0)
            {
                divi = -divi;
                flag = false;
            }
            long res = 0;
            long tmp = 0;
            long cnt = 1;
            while (divi <= divid)
            {
                cnt = 1;
                tmp = divi;
                while (tmp <= divid)
                {
                    tmp <<= 1;
                    cnt <<= 1;
                }
                res += (cnt >> 1);
                divid -= (tmp >> 1);
            }
            return flag ? (int)res : (int)-res;
        }
    }
}