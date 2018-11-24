
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public double findMaxAverage(int[] nums, int k) {
        int n = nums.length;
        int maxsum = 0;
        for (int i = 0; i < k; i++) {
            maxsum += nums[i];
        }
        int lastsum = maxsum;
        for (int i = k; i < n; i++){
            int nowsum = lastsum - nums[i - k] + nums[i];
            maxsum = Math.max(nowsum, maxsum);
            lastsum = nowsum;
        }
        return maxsum / (double)k;
    }
}

