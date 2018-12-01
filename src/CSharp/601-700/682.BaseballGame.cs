
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.BaseballCalPoints
{
public class Solution {
    public int CalPoints(string[] ops) {
        var stack = new Stack<int>();
        foreach (var i in ops)
            if (i == "+")
                stack.Push(stack.Last() + stack.ElementAt(stack.Count - 2));     
            else if (i == "C")
                stack.Pop();
            else if (i == "D")
                stack.Push(2 * stack.Last());
            else
                stack.Push(int.Parse(i));
        return stack.Sum();
    }
}
}

