using System.Collections.Generic;

namespace PeefyLeetCode.YangHuiTriangle
{
    public class Solution
    {
        public List<int> GenerateNext(List<int> arr)
        {
            var n = arr.Count;
            var r = new List<int>();
            r.Add(1);
            for (int i = 0; i < n - 1; i++)
            {
                r.Add(arr[i] + arr[i + 1]);
            }
            r.Add(1);
            return r;
        }
        public IList<IList<int>> Generate(int numRows)
        {
            var none = new List<IList<int>>();
            var one = new List<int>();
            one.Add(1);
            var two = new List<int>();
            two.Add(1);
            two.Add(1);
            if (numRows == 0)
                return none;
            if (numRows == 1)
            {
                none.Add(one);
                return none;
            }
            if (numRows == 2)
            {
                none.Add(one);
                none.Add(two);
                return none;
            }
            none.Add(one);
            none.Add(two);
            var arr = two;
            for (int i = 0; i < numRows - 2; i++)
            {
                arr = GenerateNext(arr);
                none.Add(arr);
            }
            return none;
        }
    }
}