
using System;

namespace PeefyLeetCode.AddBinary
{
    public class Solution
    {
        public string AddBinary(string a, string b)
        {
            var jinzhi = 2;
            var n1 = a.Length;
            var n2 = b.Length;
            var i = 0;
            var sum = "";
            var n = n1 > n2 ? n1 : n2;
            var c = 0;
            while (i < n - n1)
            {
                a = "0" + a;
                i += 1;
            }
            while (i < n - n2)
            {
                b = "0" + b;
                i += 1;
            }
            i = n - 1;
            while (i >= 0)
            {
                var r = (a[i] - '0') + (b[i] - '0') + c;
                c = r / jinzhi;
                r = r % jinzhi;
                sum = r.ToString() + sum;
                i -= 1;
            }
            if (c == 1)
                sum = "1" + sum;
            return sum;
        }
    }
}