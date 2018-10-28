using System;
using System.Collections.Generic;

namespace PeefyLeetCode.MinMoves
{

public class Solution {
    public int MinMoves(int[] nums) {
        int n = nums.Length;
        int min = 2147483647;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (nums[i] < min)
                min = nums[i];
        }
        return sum - min * n;
    }
}

}