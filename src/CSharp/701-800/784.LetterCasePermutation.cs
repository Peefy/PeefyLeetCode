using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.LetterCasePermutation
{
public class Solution {
    public IList<string> LetterCasePermutation(string S) {
        List<string> results = new List<string>();
        results.Add(""); 
        foreach (char x in S){
            if ('0' <= x && x <= '9'){
                for (int i = 0; i < results.Count; i++)
                {
                    results[i] = results[i] + x;
                }
            }
            else{
                List<string> temp = new List<string>();
                for (int i = 0; i < results.Count; i++)
                {
                    temp.Add(results[i] + x);
                    temp.Add(results[i] + (char)(x ^ (1 << 5)));
                }
                results = temp;
            }
        }
        return results;
    }
}
}

