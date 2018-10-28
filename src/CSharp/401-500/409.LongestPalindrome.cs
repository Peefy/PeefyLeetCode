
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.LongestPalindrome {
public class Solution {
    public int LongestPalindrome(string s) {
        char[] cs = s.ToCharArray();
        int[] counts = new int[58];  
        foreach (var c in cs) {
            counts[c - 'A'] ++;
        }   
        int res = 0;
        int add = 0;
        foreach (var i in counts) {      
            res += i / 2 * 2;          
            if (i % 2 != 0) {
                add = 1;
            }
        }       
        return res + add;
    }
}
}

