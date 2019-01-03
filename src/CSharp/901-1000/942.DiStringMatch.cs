
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.DiStringMatch
{
public class Solution {
    public int[] DiStringMatch(string S) {
        int left = 0;
        int right = S.Length;
        List<int> r = new List<int>();
        foreach (char s in S){
            if (s == 'D'){
                r.Add(right);
                right -= 1;
            }
            else{
                r.Add(left);
                left += 1;
            }
        }
        r.Add(left);
        return r.ToArray();
    }
}
}

