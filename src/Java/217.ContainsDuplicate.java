
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
    public boolean containsDuplicate(int[] nums) {
        HashSet<Integer> s = new HashSet<>();
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            if (s.contains(nums[i]) == true) {
                return true;
            } else {
                s.add(nums[i]);
            }
        }
        return false;
    }
}
