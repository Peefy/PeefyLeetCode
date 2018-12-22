
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.BackspaceCompare
{
public class Solution {
    private Stack<char> build(String str){
        Stack<char> stack = new Stack<char>();
        foreach (char s in str){
            if (s == '#'){
                if (stack.Count > 0)
                    stack.Pop();
            }
            else
                stack.Push(s);
        }
        return stack;
    }
    public bool BackspaceCompare(string S, string T) {
        Stack<char> s_stack = build(S);
        Stack<char> t_stack = build(T);
        if (s_stack.Count != t_stack.Count)
            return false;
        for (int i = 0; i < s_stack.Count; i++) {
            if (s_stack.ElementAt(i) != t_stack.ElementAt(i))
                return false;
        }
        return true;
    }
}
}

