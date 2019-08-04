
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.MissingRanges
{
public class Solution {
List<string> FindMissingRanges(int[] nums, int lower, int upper) {
        long expected = lower, newUpper = upper;
        List<string> ret = new List<string>();
        for(int i = 0; i <= nums.Length; i++) {
            if(i < nums.Length && nums[i] < expected) continue;
            long val = (i==nums.Length)?newUpper+1:nums[i];
            if(expected != val && expected + 1 == val) {
                ret.Add(expected.ToString());
            } else if(expected != val){
                ret.Add(expected.ToString() + "->" + (val-1).ToString());
            }
            expected = val+1;
        }
        return ret;
    }
}
}


