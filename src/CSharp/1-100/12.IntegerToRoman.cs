
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.IntegerToRoman
{
public class Solution {
    public string IntToRoman(int num) {
        string res = "";
        int[] tokenkey = new int[]{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string[] tokenval = new string[]{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for(int i = 0;i < 13;++i){
            int n = tokenkey[i];
            String t = tokenval[i];
            while (num >= n){
                res += t;
                num -= n;
            }
        }
        return res;
    }
}
}
