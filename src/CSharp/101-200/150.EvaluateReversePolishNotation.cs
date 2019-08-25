
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.EvaluateReversePolishNotation
{

    public class Solution
    {
        public int EvalRPN(string[] tokens)
        {
            Stack<int> stack = new Stack<int>();
            for (int i = 0; i < tokens.Length; i++)
            {
                String tokeni = tokens[i];
                if (tokeni.Equals("+") || tokeni.Equals("-") || tokeni.Equals("*") || tokeni.Equals("/"))
                {
                    int v1 = stack.Pop();
                    int v2 = stack.Pop();
                    if (tokeni.Equals("+"))
                    {
                        stack.Push(v2 + v1);
                    }
                    if (tokeni.Equals("-"))
                    {
                        stack.Push(v2 - v1);
                    }
                    if (tokeni.Equals("*"))
                    {
                        stack.Push(v2 * v1);
                    }
                    if (tokeni.Equals("/"))
                    {
                        int res = v2 / v1;
                        stack.Push(res);
                    }
                }
                else
                {
                    stack.Push(int.Parse(tokeni));
                }
            }
            return stack.Peek();
        }
    }

}


