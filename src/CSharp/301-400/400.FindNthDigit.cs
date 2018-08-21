
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.FindNthDigit
{
public class Solution {
    public int FindNthDigit(int n)  {
        long start = 1,sz = 1,bace = 9;
        while(sz * bace<n){
            n -= (int)(sz * bace);
            bace *= 10;
            ++sz;
            start*=10;
        }
        int target = (int)(start + ( n - 1) / sz);
        return target.ToString()[(n - 1) % (int)sz] -'0';
    }
}
}