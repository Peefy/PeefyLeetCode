
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.MaximumProduct
{
    public class Solution
    {
        public int MaximumProduct(int[] nums)
        {
            int max_1 = -1000;
            int max_2 = -1000;
            int max_3 = -1000;
            int min_1 = 1000;
            int min_2 = 1000;
            foreach (int num in nums)
            {
                if (num > max_1)
                {
                    max_3 = max_2;
                    max_2 = max_1;
                    max_1 = num;
                }
                else if (num > max_2)
                {
                    max_3 = max_2;
                    max_2 = num;
                }
                else if (num > max_3)
                    max_3 = num;
                if (num < min_1)
                {
                    min_2 = min_1;
                    min_1 = num;
                }
                else if (num < min_2)
                    min_2 = num;
            }
            return Math.Max(max_1 * max_2 * max_3, max_1 * min_1 * min_2);
        }
    }
}

