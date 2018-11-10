
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.ReverseStringIII
{
public class Solution {
    public String ReverseWords(String s) {
        char[] res = s.ToCharArray();
        int start = 0, end = 0;
        while(start < res.Length){
            end = s.IndexOf(' ', start);
            if(end == -1){
                Reverse(res, start, res.Length - 1);
                break;
            }
            Reverse(res, start, end - 1);
            start = end + 1;
        }
        return new String(res);
    }
    
    public void Reverse(char[] w, int l, int r){
        while(l < r){
            char t = w[l];
            w[l] = w[r];
            w[r] = t;
            l++;
            r--;
        }
    }
}
}


class Solution {

}
