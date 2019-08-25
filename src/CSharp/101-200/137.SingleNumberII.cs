
using System;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.SingleNumberII
{
public class Solution {
    public int SingleNumber(int[] nums) {
        int b1 = 0,b2 = 0;
        foreach (int n in nums){
            b1 = (b1 ^ n) & ~ b2; 
            b2 = (b2 ^ n) & ~ b1;
        }
        return b1;
    }
}
}