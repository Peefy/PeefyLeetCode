
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ZigZagConversion
{
public class Solution {
    public string Convert(string s, int numRows) {
        if (numRows == 1) 
            return s;
        List<string> rows = new List<string>();
        for (int i = 0; i < Math.Min(numRows, s.Length); i++)
        {
            rows.Add("");
        }
        int curRow = 0;
        bool goingDown = false;
        foreach (char c in s) {
            rows[curRow] += c;
            if (curRow == 0 || curRow == numRows - 1) goingDown = !goingDown;
            curRow += goingDown ? 1 : -1;
        }
        string ret = "";
        foreach (string row in rows) {
            ret += row;
        }           
        return ret;
    }
}
}