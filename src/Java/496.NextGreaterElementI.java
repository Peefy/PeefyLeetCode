
import java.awt.List;
import java.util.LinkedList;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int m = nums1.length;
        int n = nums2.length;
        int[] r = new int[m];
        HashMap<Integer, Integer> store = new HashMap<>();
        LinkedList<Integer> s = new LinkedList<>();
        for (int max : nums2) {
            while (s.size() > 0 && s.getLast() < max) {
                store.put(s.getLast(), max);
                s.removeLast();
            }
            s.add(max);
        }
        for (int i = 0; i < m; i++) {
            r[i] = store.getOrDefault(nums1[i], -1);
        }
        return r;
    }
}
