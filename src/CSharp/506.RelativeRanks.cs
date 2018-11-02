using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FindRelativeRanks
{
public class Solution {
    public string[] FindRelativeRanks(int[] nums) {
        var max = 0;
        foreach(var num in nums)
        {
            if(num > max)
                max = num;
        }
        int[] hash = new int[max + 1];
        string[] r = new string[nums.Length]; 
        for (int i = 0; i < nums.Length; i++) {
            hash[nums[i]] = i + 1;
        }
        int place = 1;
        for (int i = max; i >= 0; i--) {
            if (hash[i] != 0) {
                if (place == 1) {
                    r[hash[i] - 1] = "Gold Medal";
                } else if (place == 2) {
                    r[hash[i] - 1] = "Silver Medal";
                } else if (place == 3) {
                    r[hash[i] - 1] = "Bronze Medal";
                } else {
                    r[hash[i] - 1] = place.ToString();
                }
                place++;
            }
        }
        return r;
    }
}
}