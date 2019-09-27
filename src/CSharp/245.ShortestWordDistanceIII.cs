
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ShortestWordDistanceIII
{

public class Solution {
    public int shortestWordDistance(string[] words, string word1, string word2) {
        int res = words.Length;
        int a = -1;
        int b = -1;
        for(int i = 0 ; i < words.Length; i++){
            if(words[i].Equals(word1)){
                a = i;
            }
            if(words[i].Equals(word2)){
                if(word1.Equals(word2)){
                    a = b;
                }
                b = i;
            }
            if(a != -1 && b != -1){
                res = Math.Min(res, Math.Abs(a - b));
            }
        }
        return res;
    }
}  

}