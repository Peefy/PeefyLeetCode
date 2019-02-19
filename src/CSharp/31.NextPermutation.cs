using System;
using System.Collections.Generic;

namespace PeefyLeetCode.NextPermutation
{
public class Solution {
    void reverse(int[] nums, int l, int r){
        while (l < r){
            int tmp = nums[l];
            nums[l] = nums[r];
            nums[r] = tmp;
            l += 1;
            r -= 1;
        }
    }
    public void NextPermutation(int[] nums) {
        int nlen = nums.Length;
        int i = nlen - 1;
        while (i > 0 && nums[i] <= nums[i - 1])
            i -= 1;
        if (i == 0){
            reverse(nums, 0, nlen - 1);
            return;
        }
        int d1 = i - 1;
        i = nlen - 1;
        while (nums[i] <= nums[d1])
            i -= 1;
        int d2 = i;
        int tmp = nums[d1];
        nums[d1] = nums[d2];
        nums[d2] = tmp;
        reverse(nums, d1 + 1, nlen - 1);
    }
}
}