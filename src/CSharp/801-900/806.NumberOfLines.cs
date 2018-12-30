
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.NumberOfLines
{
public class Solution {
    public int[] NumberOfLines(int[] widths, string S) {
        int[] result = new int[2];
        char[] charArr = S.ToCharArray();
        int sum = 0;
        int line = 1;
        foreach (char c in charArr) {
            sum = sum + widths[c - 97];
            if (sum > 100) {
                line++;
                sum = widths[c - 97];
            }

        }
        result[0] = line;
        result[1] = sum;
        return result;
    }
}
}

