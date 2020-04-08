
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.UniqueWordAbbreviation
{

public class Solution {
    private Dictionary<string, HashSet<string>> abbrs = 
        new Dictionary<string, HashSet<string>>();
 
    private string abbr(string word) {
        if (word.Length <= 2) return word;
        stringBuilder sb = new stringBuilder();
        sb.Append(word[0]);
        sb.Append(word.Length - 2);
        sb.Append(word[word.Length - 1]);
        return sb.Tostring();
    }

    public Solution(string[] dictionary) {
        foreach (string word in dictionary) {
            string abbr = abbr(word);
            HashSet<string> words = abbrs[abbr];
            if (words == null) {
                words = new HashSet<string>();
                abbrs.Add(abbr, words);
            }
            words.Add(word);
        }
    }
 
    public bool IsUnique(string word) {
        HashSet<string> words = abbrs[abbr(word)];
        if (words == null || words.Count == 0) return true;
        if (words.Count == 1 && words.Contains(word)) return true;
        return false;
    }
}

}