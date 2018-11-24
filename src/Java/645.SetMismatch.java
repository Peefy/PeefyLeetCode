
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
    public int[] findErrorNums(int[] nums) {
        HashSet<Integer> hash = new HashSet<>();
        int n = nums.length;
        int total = n * (n + 1) / 2;
        int sum = 0;
        int sumset = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            if (hash.contains(nums[i]) == false){
                hash.add(nums[i]);
                sumset += nums[i];
            }
        }
        return new int[]{sum - sumset,  total - sumset};
    }
}
