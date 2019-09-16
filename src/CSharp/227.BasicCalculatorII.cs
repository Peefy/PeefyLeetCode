
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.BasicCalculatorII
{
public class Solution {
    public int Calculate(string s) {
        Stack<int> st = new Stack<int>();
        int n = s.Length, num = 0, res = 0;
        char op = '+';
        for (int i = 0; i < n; ++i){
            if (s[i] >= '0')
                num = num * 10 + (s[i] - '0');
            if ((s[i] < '0' && s[i] != ' ') || i == n - 1){
                if (op == '+')
                    st.Push(num);
                if (op == '-')
                    st.Push(-num);
                if (op == '*' || op == '/'){
                    int temp = (op == '*') ? st.Peek() * num : st.Peek() / num;
                    st.Pop();
                    st.Push(temp);
                }
                op = s[i];
                num = 0;
            }
        }
        while (st.Count > 0){
            res += st.Pop();
        }
        return res;
    }
}
}