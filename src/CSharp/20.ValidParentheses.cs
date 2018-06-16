
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.ValidParentheses
{
    public class Solution
    {
        public bool IsValid(string s)
        {
            var n = s.Length;
            // 开辟一个数组充当stack
            char[] a = new char[n / 2 + 1];
            var top = 0;
            for (var i = 0; i < n; ++i)
            {
                var c = s[i];
                switch (c)
                {
                    case '(':
                    case '{':
                    case '[':
                        a[top++] = c;
                        if (top >= n / 2 + 1)
                            return false;
                        break;
                    case ')':
                        if (top > 0)
                            if (a[top - 1] == '(')
                            {
                                top--;
                                break;
                            }
                        return false;
                    case '}':
                        if (top > 0)
                            if (a[top - 1] == '{')
                            {
                                top--;
                                break;
                            }
                        return false;
                    case ']':
                        if (top > 0)
                            if (a[top - 1] == '[')
                            {
                                top--;
                                break;
                            }
                        return false;

                    default:
                        return false;
                }
            }
            return !(top > 0);
        }

    }
}
