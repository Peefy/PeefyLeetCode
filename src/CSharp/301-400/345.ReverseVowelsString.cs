using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ReverseVowels
{
public class Solution {
    public string ReverseVowels(string s) {
        var chars = s.ToCharArray();
        var vowels = "aeiouAEIOU";
        var stack = new Stack<char>();
        var n = s.Length;
        for (int i = 0; i < n; i++)
        {
            if (vowels.IndexOf(s[i]) != -1)
            {
                stack.Push(chars[i]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (vowels.IndexOf(s[i]) != -1)
            {
                chars[i] = stack.Pop();
            }
        }
        return new string(chars);
    }
}
}