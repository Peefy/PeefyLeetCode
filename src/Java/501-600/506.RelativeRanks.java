
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;

class Solution {
    public String[] findRelativeRanks(int[] nums) {
        HashMap<Integer, String> hash = new HashMap<>();
        int n = nums.length;
        int[] oldnums = Arrays.copyOf(nums, n);
        String[] r = new String[n];
        Arrays.sort(nums);
        String[] medals = {"Gold Medal", "Silver Medal", "Bronze Medal"};
        for (int i = 0; i < n; ++i) {
            int j = n - i - 1;
            if (i <= 2)
                hash.put(nums[j], medals[i]);
            else
                hash.put(nums[j], String.valueOf(i + 1));
        }
        for (int i = 0; i < n; i++) {
            r[i] = hash.get(oldnums[i]);
        }
        return r;
    }
}

