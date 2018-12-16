using System;
using System.Collections;
using System.Collections.Generic;

namespace PeefyLeetCode.BinarySearch
{
    public class Solution {
    public int Search(int[] nums, int target) {
        int left = 0;
        int right = nums.Length - 1;
        while (left <= right){
            int middle = left + (right - left) / 2;
            if (nums[middle] == target)
                return middle;
            else if (nums[middle] < target)
                left = middle + 1;
            else
                right = middle - 1;
        }
        return -1;
    }
}
}
