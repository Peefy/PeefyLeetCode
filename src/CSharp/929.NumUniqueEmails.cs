
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.NumUniqueEmails
{
public class Solution {
    public int NumUniqueEmails(string[] emails) {
        HashSet<string> set = new HashSet<string>();
        foreach (string str in emails){
            int n = str.IndexOf('@');
            String temp = str.Substring(n);
            if (set.Contains(temp) == false)
                set.Add(temp);
        }
        return set.Count;
    }
}
}

