
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        int n1 = nums1.length;
        int n2 = nums2.length;
        quickSort(nums1, 0, n1 - 1);
        quickSort(nums2, 0, n2 - 1);
        int i = 0;
        int j = 0;
        ArrayList<Integer> r = new ArrayList<>();
        while (i < n1 && j < n2) {
            if (nums1[i] == nums2[j]){
                r.add(nums1[i]);
                i += 1;
                j += 1;
            }
            else if (nums1[i] < nums2[j])
                i += 1;
            else if (nums1[i] > nums2[j])
                j += 1;
        }
        int size = r.size();
        int[] nums = new int[size];
        for (int k = 0; k < size; k++) {
            nums[k] = r.get(k);
        }
        return nums;
    }

    private static void quickSort(int[] nums, int start, int end) {
        if (nums == null || nums.Length < 2 || start >= end) {
            return;
        } 
        int i = start, j = end;
        int pivot = nums[(start + end) / 2];
        while (i <= j) {
            while(i <= j && nums[i] < pivot) { 
                ++i; 
            }    
            while(i <= j && nums[j] > pivot) { 
                --j;
            }  
            if (i < j) { 
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ++i;
                --j;
            } else if (i == j) {
                ++i;
            }
        } 
        quickSort(nums, start, j);
        quickSort(nums, i, end);
    }
}


