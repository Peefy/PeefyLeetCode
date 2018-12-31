
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ReorderLogFiles
{
public class Solution {
    public string[] ReorderLogFiles(string[] logs) {
        Dictionary<string, string> table = new Dictionary<string, string>();
        List<string> alphalogs = new List<string>();
        List<string> digitlogs = new List<string>();
        foreach (string log in logs){
            int index = log.IndexOf(' ');
            string first = log.Substring(0, index);
            string after = log.Substring(index + 1, log.Length - index - 1);
            if ('a' <= after[0] && after[0] <= 'z'){
                alphalogs.Add(after);
                table[after] = first + ' ';
            }
            else{
                digitlogs.Add(log);
            }             
        }
        alphalogs.Sort();
        for (int i = 0; i < alphalogs.Count; i++)
        {
            alphalogs[i] = table[alphalogs[i]] + alphalogs[i];
        }
        alphalogs.AddRange(digitlogs);
        return alphalogs.ToArray();
    }
}
}

