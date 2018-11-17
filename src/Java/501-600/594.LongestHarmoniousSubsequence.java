
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
    public int findLHS(int[] nums) {
        int count = 0;
        HashMap<Integer, Integer> hash = new HashMap<>();
        for (int num : nums) {
            int val = hash.getOrDefault(num, 0);
            hash.put(num, val + 1);
        }
        for (Integer v : hash.keySet()) {
            if (hash.containsKey(v - 1) && hash.getOrDefault(v, 0) + hash.getOrDefault(v - 1, 0) > count) {
                count = hash.getOrDefault(v, 0) + hash.getOrDefault(v - 1, 0);
            }
        }
        return count;
    }
}