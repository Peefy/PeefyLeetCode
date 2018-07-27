using System.Collections.Generic;
using System.Linq;

namespace PeefyLeetCode.MinStack
{
    public class MinStack
    {
        int min = int.MaxValue;
        Stack<int> arr = new Stack<int>();
        public MinStack()
        {

        }

        public void Push(int x)
        {
            if (x <= min)
            {
                arr.Push(min);
                min = x;
            }
            arr.Push(x);
        }

        public void Pop()
        {
            var x = arr.Pop();
            if (x == min)
                min = arr.Pop();
        }

        public int Top()
        {
            return arr.Peek();
        }

        public int GetMin()
        {
            return min;
        }
    }
}