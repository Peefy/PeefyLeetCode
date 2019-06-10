
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.RemoveDuplicatesFromSortedArrayII
{
public class Solution {
    public int RemoveDuplicates(int[] nums) {
        int i = 0;
        int k = 2;
        foreach (int n in nums) {
            if (i < k || n != nums[i - k]){
                nums[i] = n;
                i += 1;
            }
        }
        return i;
    }
}
}