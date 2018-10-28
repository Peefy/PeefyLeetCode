using System;
using System.Collections.Generic;

namespace PeefyLeetCode.StringFindAnagrams
{


    public class Solution
    {
        public IList<int> FindAnagrams(string s, string p)
        {
            List<int> soln = new List<int>();
            if (s.Length == 0 || p.Length == 0 || s.Length < p.Length)
            {
                return soln;
            }
            int[] chars = new int[26];
            foreach (var c in p)
            {
                chars[c - 'a']++;
            }
            int left = 0, right = 0, length = s.Length, count = p.Length;
            while (right < length)
            {
                char rightTemp = s[right];
                if (chars[rightTemp - 'a'] >= 1)
                {
                    count--;
                }
                chars[rightTemp - 'a']--;
                right++;
                if (count == 0)
                {
                    soln.Add(left);
                }
                if (right - left == p.Length)
                {
                    char tempLeft = s[left];
                    if (chars[tempLeft - 'a'] >= 0)
                    {
                        count++;
                    }
                    chars[tempLeft - 'a']++;
                    left++;
                }
            }
            return soln;
        }
    }

}