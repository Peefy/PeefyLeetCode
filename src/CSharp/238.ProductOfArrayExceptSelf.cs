
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ProductOfArrayExceptSelf
{

public class Solution {
    public int[] ProductExceptSelf(int[] nums) {
        int[] res = new int[nums.Length];
        int p = 1, q = 1;
        for (int i = 0; i < nums.Length; i++) {
            res[i] = p;
            p *= nums[i];
        }
        for (int i = nums.Length - 1; i > 0 ; i--) {
            q *= nums[i];
            res[i - 1] *= q;
        }
        return res;
    }
}
}