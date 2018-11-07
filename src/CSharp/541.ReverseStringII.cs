using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.ReverseStringII
{
public class Solution {
    public string ReverseStr(string s, int k) {
        char[] strlist = s.ToCharArray();
        int n = strlist.Length;
        int i = 0;
        while (i < n){
            if (i + k > n - 1){
                for (int j = i; j < (i + n) / 2; j++) {
                    int m = n - 1 - j + i;
                    char tmp = strlist[j];
                    strlist[j] = strlist[m];
                    strlist[m] = tmp;
                }
            }
            else{
                for (int j = i; j < (i + i + k) / 2; j++) {
                    int m = i + k - 1 - j + i;
                    char tmp = strlist[j];
                    strlist[j] = strlist[m];
                    strlist[m] = tmp;
                }
            }
            i += 2 * k;
        }
        return new string(strlist);
    }
}
}