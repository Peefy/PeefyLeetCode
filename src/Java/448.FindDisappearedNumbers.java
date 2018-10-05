import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public List<Integer> findDisappearedNumbers(int[] nums) {
        int n = nums.length;
        HashSet<Integer> hash = new HashSet<>();
        ArrayList<Integer> r = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            hash.add(nums[i]);
        }
        for (int i = 1; i < n + 1; i++) {
            if (hash.contains(i) == false) {
                r.add(i);
            }
        }
        return r;
    }
}

