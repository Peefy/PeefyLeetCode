
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
    public String[] findRestaurant(String[] list1, String[] list2) {
        int m = list1.length;
        int n = list2.length;
        int min = m + n;
        HashMap<String, Integer> hash = new HashMap<>();
        LinkedList<String> res = new LinkedList<>();
        for (int i = 0; i < n; i++) {
            hash.put(list2[i], i);
        }
        for (int i = 0; i < m; i++) {
            if (hash.containsKey(list1[i])) {
                if (min > i + hash.get(list1[i])) {
                    res.clear();
                    res.add(list1[i]);
                    min = i + hash.get(list1[i]);
                }
                else if(min == i + hash.get(list1[i])){
                    res.add(list1[i]);
                }
            }
        }
        return res.toArray(new String[res.size()]);
    }
}

