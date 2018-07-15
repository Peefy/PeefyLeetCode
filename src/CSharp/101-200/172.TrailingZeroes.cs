
using System;

namespace PeefyLeetCode.TrailingZeroes
{
    public class Solution
    {
        public int TrailingZeroes(int n)
        {
            int sum = 0;
            while (n > 0)
            {
                sum += n / 5;
                n /= 5;
            }
            return sum;
        }
    }
}