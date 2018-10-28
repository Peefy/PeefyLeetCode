

import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int minMoves(int[] nums) {
        int n = nums.length;
        int min = Integer.MAX_VALUE;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (nums[i] < min)
                min = nums[i];
        }
        return sum - min * n;
    }
}


