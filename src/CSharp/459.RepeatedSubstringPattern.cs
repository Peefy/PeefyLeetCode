
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.RepeatedSubstringPattern
{

public class Solution {
    public bool RepeatedSubstringPattern(string s) {
        if (s == null || s.Length <= 1) {
            return false;
        }
        int n = s.Length;
        char[] chars = s.ToCharArray();
        int[] prims = new int[]{
                2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97
        };

        for (int i = 0; i < prims.Length; i++) {
            int p = prims[i];
            if (n % p != 0) {
                continue;
            }
            bool flag = true;
            string sub = s.Substring(0, n / p + 1);
            for (int j = 1; j < p; j++) {
                if (!sub.Equals(s.Substring(n / p * j, n / p + 1))) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                return true;
            }
        }
        return false;
    }
}

}
