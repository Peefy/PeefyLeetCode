
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.UncommonFromSentences
{
public class Solution {
    public string[] UncommonFromSentences(string A, string B) {
        Dictionary<string, int> hash = new Dictionary<string, int>();
        List<string> r = new List<string>();
        foreach (string s in A.Split(' ')) 
        {
            if (hash.ContainsKey(s) == false)
            {
                hash.Add(s, 1);
            }
            else
            {
                hash[s] += 1;
            }
        }
        foreach (string s in B.Split(' ')) 
        {
            if (hash.ContainsKey(s) == false)
            {
                hash.Add(s, 1);
            }
            else
            {
                hash[s] += 1;
            }
        }
        foreach (string key in hash.Keys) 
        {
            if (hash[key] == 1) {
                r.Add(key);
            }
        }
        return r.ToArray();
    }
}
}

