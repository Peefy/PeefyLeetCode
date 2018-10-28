using System;
using System.Collections.Generic;

namespace PeefyLeetCode.FindContentChildren
{

public class Solution {
    public int FindContentChildren(int[] g, int[] s) {
        int count = 0;
        int i = 0;
        Array.Sort(g);
        Array.Sort(s);
        foreach (var c in s) {
            if (c >= g[i]){
                count += 1;
                if (i < g.Length - 1)
                    i += 1;
                else
                    break;
            }           
        }
        return count;
    }
}

}