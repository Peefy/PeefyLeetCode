
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;

class Solution {
    int[] nums;

    public void swap(int a, int b){
        int tmp = this.nums[a];
        this.nums[a] = this.nums[b];
        this.nums[b] = tmp;
    }

    public int partition(int left, int right, int pivot_index){
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

    public int quickselect(int left, int right, int k_smallest){
        if (left == right)
            return this.nums[left];
        Random random_num = new Random();
        int pivot_index = left + random_num.nextInt(right - left);
        pivot_index = partition(left, right, pivot_index);
        if (k_smallest == pivot_index)
            return this.nums[k_smallest];
        else if (k_smallest < pivot_index)
            return quickselect(left, pivot_index - 1, k_smallest);
        return quickselect(pivot_index + 1, right, k_smallest);
    }

    public int findKthLargest(int[] nums, int k) {
        this.nums = nums;
        return quickselect(0, nums.length - 1, nums.length - k);
    }
}

