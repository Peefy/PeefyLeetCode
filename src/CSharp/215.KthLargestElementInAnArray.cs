
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.KthLargestElementInAnArray
{
public class Solution {
    int[] nums;
    void swap(int a, int b){
        int tmp = this.nums[a];
        this.nums[a] = this.nums[b];
        this.nums[b] = tmp;
    }

    int partition(int left, int right, int pivot_index){
        int pivot = this.nums[pivot_index];
        swap(pivot_index, right);
        int store_index = left;
        for (int i = left; i <= right; i++) {
            if (this.nums[i] < pivot){
                swap(store_index, i);
                store_index++;
            }
        }
        swap(store_index, right);
        return store_index;
    }

    int quickselect(int left, int right, int k_smallest){
        if (left == right)
            return this.nums[left];
        Random random_num = new Random();
        int pivot_index = left + random_num.Next(right - left);
        pivot_index = partition(left, right, pivot_index);
        if (k_smallest == pivot_index)
            return this.nums[k_smallest];
        else if (k_smallest < pivot_index)
            return quickselect(left, pivot_index - 1, k_smallest);
        return quickselect(pivot_index + 1, right, k_smallest);
    }

    public int FindKthLargest(int[] nums, int k) {
        this.nums = nums;
        return quickselect(0, nums.Length - 1, nums.Length - k);
    }
}
}