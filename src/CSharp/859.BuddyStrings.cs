
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.BuddyStrings
{
public class Solution {
     public bool BuddyStrings(string A, string B){
        if (A.Length != B.Length)
            return false;
        if (A == B){
            for (int i = 0;i < A.Length;++i)
                for (int j = i + 1; j < A.Length; j++){
                    if (A[i] == A[j])
                        return true;
                }
        }
        List<char> r = new List<char>();
        for (int i = 0;i < A.Length;++i){
            if (A[i] != B[i]){
                r.Add(A[i]);
                r.Add(B[i]);
            }
        }
        return r.Count == 4 && r[0] == r[3] && r[1] == r[2]; 
    }
}
}

