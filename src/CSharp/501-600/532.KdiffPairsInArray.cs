using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FindPairs
{
public class Solution {
    public int FindPairs(int[] nums, int k) {
        int count = 0;
        if(k < 0)
            return count;
        var hm = new Dictionary<int, int>();
        for(int i = 0; i < nums.Length; i++){
            hm.Add(nums[i],i);
        }
        for(int i = 0; i < nums.Length; i++){
            if(hm.ContainsKey(nums[i] + k) && hm[nums[i]+k] != i){
                count++;
                hm.Remove(nums[i] + k);
            }
        }
        return count;
    }
}
}