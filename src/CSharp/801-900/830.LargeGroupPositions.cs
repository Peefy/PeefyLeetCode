
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.LargeGroupPositions
{
public class Solution {
    public IList<IList<int>> LargeGroupPositions(string S) {
        List<IList<int>> r = new List<IList<int>>();
        S += ' ';
        int ISBIG = 3;
        int lastindex = 0;
        int count = 0;
        for (int i = 0; i < S.Length - 1; i++) {
            if (S[i] != S[i + 1]){
                if (count >= ISBIG - 1){
                    r.Add(new List<int>{lastindex, lastindex + count});
                }
                count = 0;
                lastindex = i + 1;
            }
            else
                count += 1;
        }           
        return r;
    }
}
}

