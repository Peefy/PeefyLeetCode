
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.MostCommonWord
{
public class Solution {
    public string MostCommonWord(string paragraph, string[] banned) {
        char[] parr = paragraph.ToCharArray();
        for (int i = 0; i < parr.Length; i++) {
            if (parr[i] == '.' || parr[i] == '!' || parr[i] == '?' || 
                parr[i] == ';' || parr[i] == ',' || parr[i] == '\\' ||
                parr[i] == ' ' || parr[i] == '\'' || parr[i] == '\"') {
                parr[i] = ' ';
            }
            else if (parr[i] >= 'A' && parr[i] <= 'Z'){
                parr[i] = (char)(parr[i] + 'a' - 'A');
            }
        }
        paragraph = new String(parr);
        String[] strs = paragraph.Split(" ");
        Dictionary<string, int> hash = new Dictionary<string, int>();
        HashSet<string> set = new HashSet<string>();
        foreach (string ban in banned) {
            set.Add(ban);
        }
        for (int i = 0; i < strs.Length; i++) {
            if (strs[i] != " "){
                if (hash.ContainsKey(strs[i]) == false)
                {
                    hash.Add(strs[i], 1);
                }
                else
                {
                    hash[strs[i]] += 1;
                }
            }
        }
        int maxcount = 0;
        String r = "";
        foreach (var c in hash.Keys){
            if (set.Contains(c) == false && hash[c] > maxcount){
                maxcount = hash[c];
                r = c;
            }
        }
        return r;
    }
}
}

