
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.FractionToDecimal
{
public class Solution {
    public string FractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) {
            return "0";
        }
        StringBuilder fraction = new StringBuilder();
        // If either one is negative (not both)
        if (numerator < 0 ^ denominator < 0) {
            fraction.Append("-");
        }
        // Convert to Long or else abs(-2147483648) overflows
        long dividend = Math.Abs((long)(numerator));
        long divisor = Math.Abs((long)(denominator));
        fraction.Append((dividend / divisor).ToString());
        long remainder = dividend % divisor;
        if (remainder == 0) {
            return fraction.ToString();
        }
        fraction.Append(".");
        Dictionary<long, int> map = new Dictionary<long, int>();
        while (remainder != 0) {
            if (map.ContainsKey(remainder)) {
                fraction.Insert(map[remainder], "(");
                fraction.Append(")");
                break;
            }
            map.Add(remainder, fraction.Length);
            remainder *= 10;
            fraction.Append((remainder / divisor).ToString());
            remainder %= divisor;
        }
        return fraction.ToString();
    }
}
}



