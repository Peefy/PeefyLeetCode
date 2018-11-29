
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.ValidPalindromeII
{
    public class Solution
    {
        private const int N = 1;

        public bool ValidPalindrome(String s)
        {
            return validate(s, 0, s.Length - 1, 0);
        }
        bool validate(String s, int i, int j, int delCount)
        {
            if (delCount > N)
            {
                return false; // N - times of deletion allowed.
            }
            while (i < j)
            {
                if (s[i] == s[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    delCount++;
                    return validate(s, i, j - 1, delCount) || validate(s, i + 1, j, delCount);
                }
            }
            return true;
        }
    }
}

