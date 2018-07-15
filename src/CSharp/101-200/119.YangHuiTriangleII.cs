using System.Collections.Generic;

namespace PeefyLeetCode.YangHuiTriangleII
{
    class Solution
    {
        public IList<int> GetRow(int rowIndex)
        {
            long nCk = 1;
            var result = new List<int>();
            for (int i = 0; i <= rowIndex; i++)
            {
                result.Add((int)nCk);
                nCk = nCk * (rowIndex - i) / (i + 1);
            }
            return result;
        }
    }
}