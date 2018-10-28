using System;
using System.Collections.Generic;

namespace PeefyLeetCode.StringCompression
{
    public class Solution
    {
        public int Compress(char[] chars)
        {
            int n = chars.Length;
            int i = 0;
            int cnt = 0;
            int insert_pos = 0;
            char char_match = chars[0];
            while (i < n)
            {
                if (chars[i] == char_match)
                    ++cnt;
                else
                {
                    chars[insert_pos] = char_match;
                    ++insert_pos;
                    if (cnt > 1)
                    {
                        foreach (var cc in cnt.ToString())
                        {
                            chars[insert_pos] = cc;
                            ++insert_pos;
                        }
                    }
                    char_match = chars[i];
                    cnt = 1;
                }
                ++i;
            }
            chars[insert_pos] = char_match;
            ++insert_pos;
            if (cnt > 1)
            {
                foreach (var cc in cnt.ToString())
                {
                    chars[insert_pos] = cc;
                    ++insert_pos;
                }
            }
            return insert_pos;
        }
    }

}