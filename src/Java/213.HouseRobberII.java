
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if (n == 1)
            return nums[0];
        int[] dpa = new int[n + 1];
        int[] dpb = new int[n + 1];
        for (int i = 2; i < n + 1; i++) {
            dpa[i] = Math.max(dpa[i - 1], dpa[i - 2] + nums[i - 2]);
            dpb[i] = Math.max(dpb[i - 1], dpb[i - 2] + nums[i - 1]);
        }
        return Math.max(dpa[n], dpb[n]);
    }
}

