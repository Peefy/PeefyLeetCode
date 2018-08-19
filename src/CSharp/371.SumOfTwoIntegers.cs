using System;
using System.Collections.Generic;

namespace PeefyLeetCode.SumOfTwoIntegers
{
public class Solution {
    public int GetSum(int a, int b) {
        int carry = 0;
        while (b!=0){
            carry=a&b;
            a=a^b;
            b=carry<<1;
        }
        return a;
    }
}
}