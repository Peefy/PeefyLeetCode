
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.HIndex
{

public class Solution {
    public int HIndex(int[] citations) {
        int n = citations.Length;
        int[] bucket = new int[n + 1];
        foreach (int c in citations) {
            if (c >= n)
                bucket[n] += 1;
            else
                bucket[c] += 1;
        }
        int cur = 0;
        for (int i = n; i > 0; i--) {
            cur += bucket[i];
            if (cur >= i)
                return i;
        }
        return 0;
    }
}

}