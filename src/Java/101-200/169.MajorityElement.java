
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
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> m = new HashMap<>();
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            if (m.containsKey(nums[i]) == false) {
                m.put(nums[i], 1);
            }
            else{
                int val = m.get(nums[i]);
                m.remove(nums[i]);
                m.put(nums[i], val + 1);
            }
        }
        Collection<Integer> s = m.values();
        int majar = Collections.max(s);
        for (Map.Entry<Integer, Integer> en : m.entrySet()) {
            if (en.getValue() == majar) {
                return en.getKey();
            }
        }
        return -1;
    }
}




