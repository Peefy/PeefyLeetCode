
import java.awt.List;
import java.lang.annotation.Retention;
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
    public int thirdMax(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int k = 0;
        for (int i = 1; i < n; i++) {
            int j = n - 1 - i;
            if (nums[j] != nums[j + 1])
                ++k;
            if (k == 2)
                return nums[j];
        }
        return nums[n - 1];
    }
}

    