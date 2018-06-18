
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.LongestCommonPrefix
{
    public class Solution
    {

        public bool isSame(string[] strs, int index)
        {
            try
            {
                int count = 0;
                for (int i = 0; i < strs.Length - 1; ++i)
                {
                    if (strs[i][index] == strs[i + 1][index])
                    {
                        count += 1;
                    }
                }
                if (count == strs.Length - 1)
                {
                    return true;
                }
                return false;
            }
            catch
            {
                return false;
            }
        }

        public string LongestCommonPrefix(string[] strs)
        {
            var return_str = "";
            int min_str_len = int.MaxValue;
            int n = strs.Length;
            for (int i = 0; i < n; ++i)
            {
                int now_str_len = strs[i].Length;
                if (now_str_len <= min_str_len)
                {
                    min_str_len = now_str_len;
                }
            }
            for (int i = 0; i < min_str_len; ++i)
            {
                if (this.isSame(strs, i) == true)
                {
                    return_str += strs[0][i];
                }
                else
                {
                    break;
                }
            }
            return return_str;
        }

    }
}
