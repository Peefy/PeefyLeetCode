
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.ShortestToChar
{
public class Solution {
    public int[] ShortestToChar(string S, char C) {
        var indexlist = new List<int>();
        int[] r = new int[S.Length];   
        int j = 1;
        for (int i = 0; i < S.Length; i++)
        {
            if (C == S[i])
                indexlist.Add(i);
        }
        indexlist.Insert(0, -10000);
        indexlist.Add(10000); 
        for (int i = 0; i < S.Length; i++)
        {
            if (C == S[i]){
                ++j;
            }
            else
                r[i] = Math.Min(i - indexlist[j - 1], indexlist[j] - i);
        }
        return r;
    }
}
}

