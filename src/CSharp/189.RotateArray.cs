
using System;

namespace PeefyLeetCode.RotateArray
{
    public class Solution {
    
    public void Rotate(int[] nums, int k) {
        int len = nums.Length;
        if(len <= 1) {
            return;
        }
        k %= len;
        if(k == 0) {
            return;
        }
        reverse(nums,0,len-k-1);
        reverse(nums,len-k,len-1);
        reverse(nums,0,len-1);
    }
    private void reverse(int[] nums, int start, int end){
        while (start < end) {
            swap(nums,start,end);
            start++;
            end--;
        }
    }
    private void swap(int[] nums, int index1, int index2) {
        int temp = nums[index1];
        nums[index1] = nums[index2];
        nums[index2] = temp;
    }
}
}