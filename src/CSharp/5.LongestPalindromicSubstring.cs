
using System;
using System.Diagnostics.Contracts;
using System.Text;

namespace PeefyLeetCode.DpLongestPalindrome
{
public class Solution {
    public static String Reverse(String str){  
        char[] arr = str.ToCharArray();
        Array.Reverse(arr);
        return new string(arr);
    }
    public string LongestPalindrome(string s) {
        int length = s.Length;
        int max_len = 0;
        int begin = 0;
        for (int i = 0; i < length; i++) {
            if (i - max_len >= 1 && s.Substring(i - max_len - 1, i + 1 - (i - max_len - 1)) == Reverse(s.Substring(i - max_len - 1, i + 1 - (i - max_len - 1)))){
                begin = i - max_len - 1;
                max_len += 2;
                continue;
            }
            if (i - max_len >= 0 && s.Substring(i - max_len, i + 1 - (i - max_len)) == Reverse(s.Substring(i - max_len, i + 1 - (i - max_len)))){
                begin = i - max_len;
                max_len += 1;
            }
        }
        return s.Substring(begin, max_len);
    }
}
}