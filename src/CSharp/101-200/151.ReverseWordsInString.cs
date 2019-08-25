
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.ReverseWordsInString
{

public class Solution {
    public string ReverseWords(string s) {
        String result;
        s = s + " ";
        int length = s.Length;
        StringBuilder sb = new StringBuilder();
        Stack<char> stack = new Stack<char>();
        for (int i = length - 1; i >= 0; i--) {
            while (s[i] == ' ') {
                while (stack.Count != 0) {
                    sb.Append(stack.Pop());
                }
                if (i == 0)
                    break;
                i--;
            }
            if (s[i] != ' ') {
                if (i != length - 1 && s[i + 1] == ' ') {
                    stack.Push(' ');
                }
                stack.Push(s[i]);
                if (i == 0) {
                    while (stack.Count != 0) {
                        sb.Append(stack.Pop());
                    }
                    break;
                }
            }
        }
        int sblength = sb.Length;
        if (sblength != 0) {
            result = sb.ToString().Substring(0, sblength - 1);
        } else {
            result = "";
        }
        return result;
    }
}

}


