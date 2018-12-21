
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.GoatLatin
{
public class Solution {
    public string ToGoatLatin(string S) {
        HashSet<char> yuanyin = new HashSet<char> {'a', 'e', 'i', 'o', 'u', 'I', 'E', 'A', 'O', 'U'};
        string[] words = S.Split(' ');
        for (int i = 0; i < words.Length; i++)
        {
            if (yuanyin.Contains(words[i][0]) == false){
                words[i] = words[i].Substring(1) + words[i][0];
            }
            words[i] += "ma";
            for (int j = 0; j <= i; j++)
            {
                words[i] += 'a';
            }
        }
        return string.Join(" ", words);
    }
}
}

