
using System;

namespace PeefyLeetCode.TitleToNumber
{
    public class Solution
    {
        public int TitleToNumber(string s)
        {
            double sum = 0;
            int n = s.Length;
            for (int i = 0; i < n; i++)
            {
                int j = n - i - 1;
                sum += (s[j] - 'A' + 1) * Math.Pow(26, i);
            }
            return (int)sum;
        }
    }
}