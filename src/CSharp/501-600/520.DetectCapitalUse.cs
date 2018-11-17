using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.DetectCapitalUse
{
public class Solution {
    public bool DetectCapitalUse(string word) {
        int n = word.Length;
        int count = 0;
        foreach (var c in word)
        {
            if (c >= 'A' && c <= 'Z')
                count++;
        }      
        if (count == 0 || count == n)
            return true;
        if (count == 1 && (word[0] >= 'A' && word[0] < 'Z'))
            return true;
        return false;
    }
}
}