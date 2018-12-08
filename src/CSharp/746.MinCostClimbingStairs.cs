using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.MinCostClimbingStairs
{
public class Solution {
    public int MinCostClimbingStairs(int[] cost) {
        int len = cost.Length;
        if(len == 2){
            return Math.Min(cost[0], cost[1]);
        }
        for(int i = 2; i < cost.Length; i++){
            cost[i] = Math.Min(cost[i - 1], cost[i - 2]) + cost[i];
        }
        return Math.Min(cost[len - 1], cost[len - 2]);   
    }
}
}

