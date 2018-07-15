
import java.awt.List;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;

class Solution {
    public int rob(int[] nums) {
        int n = nums.length;
        if (n == 0)
            return 0;
        if (n == 1)
            return nums[0];
        if (n == 2)
            return Math.max(nums[0], nums[1]);
        int[] prices = new int[n];
        prices[0] = nums[0];
        prices[1] = Math.max(nums[0], nums[1]);
        for (int i = 2; i < n; i++) {
            prices[i] = Math.max(nums[i] + prices[i - 2], prices[i - 1]);
        } 
        return prices[n - 1];
    }
}


