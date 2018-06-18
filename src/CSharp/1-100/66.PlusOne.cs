using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.PlusOne
{

        public class Solution
        {
            public int[] PlusOne(int[] digits)
            {
                int n = digits.Length;
                int i = n - 1;
                int c = 1;
                while (i >= 0)
                {
                    int digit = digits[i];
                    digit += c;
                    digits[i] = digit % 10;
                    c = digit / 10;
                    --i;
                    if (c == 0)
                        break;
                }
                if (c == 1)
                {
                    var list = new List<int>(digits);
                    list.Insert(0, c);
                    return list.ToArray();
                }
                return digits;
            }
        }
}