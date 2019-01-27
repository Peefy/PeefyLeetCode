
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.MyAtoi
{
    public class Solution
    {
        public int MyAtoi(string str)
        {
            if (string.IsNullOrEmpty(str))
                return 0;
            int sign = 1;
            int bases = 0;
            int i = 0;
            while (str[i] == ' ')
            {
                i++;
                if (i >= str.Length)
                    return 0;
            }
            if (str[i] == '-' || str[i] == '+')
                sign = str[i++] == '-' ? -1 : 1;
            while (i < str.Length && str[i] >= '0' && str[i] <= '9')
            {
                if (bases > int.MaxValue / 10 || (bases == int.MaxValue / 10 && str[i] - '0' > 7))
                {
                    return (sign == 1) ? int.MaxValue : int.MinValue;
                }
                bases = 10 * bases + (str[i++] - '0');
            }
            return bases * sign;
        }
    }
}
