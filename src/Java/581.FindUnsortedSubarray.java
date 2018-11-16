
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
    public int findUnsortedSubarray(int[] nums) {
        int n = nums.length;
        int left = 0;
        int right = n - 1;
        while (left < n - 1 && nums[left] <= nums[left + 1])
            left += 1;
        if (left == n - 1)
            return 0;
        while (right > 0 && nums[right] >= nums[right - 1])
            right -= 1;
        int min_value = Integer.MAX_VALUE;
        int max_value = Integer.MIN_VALUE;
        for (int i = left; i < right + 1; i++) {
            min_value = Math.min(nums[i], min_value);
            max_value = Math.max(nums[i], max_value);
        }
        while (left > -1 && nums[left] > min_value)
            left -= 1;
        while (right < n && nums[right] < max_value)
            right += 1;
        return right - left - 1;
    }
}