
import java.util.List;
import java.util.TreeSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;

class Solution {
    public boolean containsNearbyAlmostDuplicate(int[] nums, int k, int t) {
        TreeSet<Integer> set = new TreeSet<>();
        for (int i = 0; i < nums.length; i++) {
            Integer s = set.ceiling(nums[i]);
            if (s != null && s <= nums[i] + t)
                return true;
            Integer g = set.floor(nums[i]);
            if (g != null && nums[i] <= g + t)
                return true;
            set.add(nums[i]);
            if (set.size() > k){
                set.remove(nums[i - k]);
            }
        }
        return false;
    }
}

