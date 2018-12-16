using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.ShortestCompletingWord
{
public class Solution {
    public string ShortestCompletingWord(string licensePlate, string[] words) {
        licensePlate = licensePlate.ToLower();
        int[] cnt = new int[26];
        foreach (char c in licensePlate){
            if(c >='a' && c <= 'z') cnt[c - 'a']++;
        }
        string ans = "";
        foreach (string w in words){
            int[] cnt2 = new int[26];
            foreach (char c in w){
                if(c>='a' && c<='z') cnt2[c - 'a']++;
            }
            int p = 0;
            while(p < 26){
                if(cnt2[p] < cnt[p]) break;
                p++;
            }
            if(p == 26){
                if(ans == "" || ans.Length > w.Length) 
                    ans = w;
            }
        }
        return ans;
    }
}
}

