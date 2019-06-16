
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.RemoveDuplicatesFromSortedArrayII
{
public class Solution {
    public bool Search(int[] nums, int target) {
        int left = 0;
        int right = nums.Length - 1;
        if (right == -1)
            return false;
        int k = 0;
        for (int i = 1; i < right + 1; i++){
            if (nums[i] < nums[i - 1])
                k = i;
        }
        while (left <= right){
            int beforemiddle = (left + right) / 2;
            int middle = beforemiddle + k;
            if (middle >= nums.Length)
                middle = middle - nums.Length;
            if (target == nums[middle])
                return true;
            else if (target < nums[middle])
                right = beforemiddle - 1;
            else
                left = beforemiddle + 1;
        }
        return false;
    }
}
}