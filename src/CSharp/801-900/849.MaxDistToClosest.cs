
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.MaxDistToClosest
{
public class Solution {
    public int MaxDistToClosest(int[] seats) {
        int count = 0;
        int maxcount = 0;
        int firstindex = 0;   
        for(int i = 0; i < seats.Length; i++){
            if (seats[i] == 1){
                firstindex = i;
                break;
            }    
        }
        for(int i = 0; i < seats.Length; i++){
            if (seats[i] == 1){
                if (count > maxcount)
                    maxcount = count;
                count = 0;
            }
            else
                ++count;
        }
        return Math.Max((maxcount + 1) / 2, Math.Max(count, firstindex));
    }
}
}

