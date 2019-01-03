
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.ReverseOnlyLetters
{
public class Solution {
    public string ReverseOnlyLetters(string S) {
        Stack<char> res = new Stack<char>();
        string s = "";
        foreach (char i in S){
            if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z'))
                res.Push(i);
        }    
        foreach (char i in S){
            if (('a' <= i && i <= 'z') || ('A' <= i && i <= 'Z')){
                s += res.Pop();
            }
            else
                s += i;
        }
        return s;
    }
}
}

