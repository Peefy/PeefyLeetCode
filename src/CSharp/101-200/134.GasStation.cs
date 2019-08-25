
using System;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.GasStation
{
public class Solution {
    public int CanCompleteCircuit(int[] gas, int[] cost) {
        int total = 0;
        int nowsum = 0;
        int start = 0;
        for (int i = 0; i < gas.Length; i++) {
            total += (gas[i] - cost[i]);
            if (nowsum < 0){
                nowsum = gas[i] - cost[i];
                start = i;
            }
            else
                nowsum += (gas[i] - cost[i]);
        }
        return total >= 0 ? start : -1;
    }
}
}