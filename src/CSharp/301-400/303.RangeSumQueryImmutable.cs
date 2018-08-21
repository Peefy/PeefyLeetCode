using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.NumArray
{
public class NumArray {

    int[] arr;
    public NumArray(int[] nums) {
        int n = nums.Length;
        if (n == 0) {
            return;
        }
        arr = new int[n];
        arr[0] = nums[0];
        for (int i = 1; i < n; i++) {
            arr[i] = arr[i - 1] + nums[i];
        }
    }
    
    public int SumRange(int i, int j) {
        if (i == 0) {
            return arr[j];
        } else {
            return arr[j] - arr[i - 1];
        }
    }
}
}