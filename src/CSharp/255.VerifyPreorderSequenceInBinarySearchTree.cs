
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.VerifyPreorderSequenceInBinarySearchTree
{
    public class Solution
    {
        public bool VerifyPreorde(int [] nums)
        {
            var min = int.MinValue;
            var stack = new Stack<int>();
            foreach (var num in nums)
            {
                if (num < min)
                    return false;
                while (stack.Count > 0 && num > stack.Peek())
                {
                    min = stack.Pop();
                }
                stack.Push(num);
            }
            return true;
        }
    }
}