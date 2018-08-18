using System;
using System.Collections.Generic;

namespace PeefyLeetCode.IntersectionOfTwoArrays
{
public class Solution {
    public int[] Intersection(int[] nums1, int[] nums2) {
                // 元素唯一，考虑使用 Set 的特性
        // 因为可以不考虑输出结果的顺序，所以可以先对数组排序，然后再比较两个数组，遇到已有结果的相同的数据可以跳过，减少不必要的比较
        
        if (nums1 == null || nums2 == null || nums1.Length == 0 || nums2.Length == 0) {
            return new int[0];
        }
    
        // 对数组进行快排
        quickSort(nums1, 0, nums1.Length - 1);
        quickSort(nums2, 0, nums2.Length - 1);
        
        // Arrays.sort(nums1); 
        //  Arrays.sort(nums2);
       
        int[] resultT = new int[nums1.Length < nums2.Length ? nums1.Length : nums2.Length];
        int n = 0;
        int i = 0;
        int j = 0;
        while (i < nums1.Length && j < nums2.Length) {
            if (nums1[i] == nums2[j]) {
                if (n == 0 || resultT[n - 1] != nums1[i]) {
                    resultT[n] = nums1[i];
                    n++;
                }
            
                ++i;
                ++j;
            } else if (nums1[i] < nums2[j]) {
                ++i;
            } else {
                ++j;
            }
        }
        
        int[] result = new int[n];
        while (--n >= 0) {
            result[n] = resultT[n];
        }
        
        return result;
    }
    private static void quickSort(int[] nums, int start, int end) {
        if (nums == null || nums.Length < 2 || start >= end) {
            return;
        }
    
        int i = start, j = end;
        // 选一个基准值，完成一次快排操作后，数组序列在该值可分为左右两个部分，在其左边的序列都比该基准值小，在其右边的序列都比该基准值大
        int pivot = nums[(start + end) / 2];
        while (i <= j) {
            // 夹逼原则，分别从左右开端进行判断
            while(i <= j && nums[i] < pivot) { // 从左边开始，比基准值小的直接跳过
                ++i; 
            }
            
            while(i <= j && nums[j] > pivot) { // 从有边开始，比基准值大的直接跳过
                --j;
            }
            
            if (i < j) { // 此时肯定是出现左边的数了大于或等于基准值或者右边数小于或等于基准值的情况，需要交换两者位置
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ++i;
                --j;
            } else if (i == j) {
                // 如果 i = j 说明已经到了数组中间，一次快排结束，i + 1 满足跳出循环的条件
                ++i;
            }
        }
        
        quickSort(nums, start, j);
        quickSort(nums, i, end);
    }
}
}