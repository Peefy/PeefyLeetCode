
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.VerifyingAnAlienDictionary
{
public class Solution {
    int[] reOrder;

    bool compareto(char[] a, char[] b){
        for(int i = 0; i < a.Length; ++i)
        {
            if(i >= b.Length)
                return false;
            if(reOrder[a[i]-'a'] > reOrder[b[i] - 'a'])
                return false;
            else if (reOrder[a[i]-'a'] < reOrder[b[i]-'a'])
                return true;
            else 
                continue;
        }
        return true;
    }
    public bool IsAlienSorted(string[] words, string order) {
        reOrder = new int[26];
        for (int i = 0;i < 26;++i){
            reOrder[order[i] - 'a'] = i; 
        } 
        for (int i = 0; i < words.Length - 1; ++i){
            if (compareto(words[i].ToCharArray(), words[i + 1].ToCharArray()) == false)
                return false;
        }           
        return true;
    }
}
}

