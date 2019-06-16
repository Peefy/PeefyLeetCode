using System;
using System.Collections.Generic;

namespace PeefyLeetCode.GenerateParenthesis
{
public class Solution {
    public IList<string> GenerateParenthesis(int n) {
        List<string> res = new List<string>();
        recursive(n, 0, 0, res, "");
        return res;
    }

    
    void recursive(int n, int count1, int count2, List<string> res, string ans){
        if (count1 > n || count2 > n) 
            return;
        if (count1 == n && count2 == n)  
            res.Add(ans);
        if (count1 >= count2){
            string ans1 = ans;
            recursive(n, count1+1, count2, res, ans+"(");
            recursive(n, count1, count2+1, res, ans1+")");
        }
    }
}
}