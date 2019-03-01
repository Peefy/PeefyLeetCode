using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.MyPow
{
public class Solution {
    public double MyPow(double x, int n) {
        if (n == 1) {
            return x;
        }
        if (n == 0) {
            return 1;
        }
        int t = n / 2;
        if (n < 0) {
            x = 1 / x;
            t = -t;
        }
        double res = MyPow(x, t);
        if (n % 2 == 0)
            return res * res;
        return res * res * x;
    }
}
}