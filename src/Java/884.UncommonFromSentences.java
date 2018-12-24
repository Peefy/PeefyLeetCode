
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public String[] uncommonFromSentences(String A, String B) {
        HashMap<String, Integer> hash = new HashMap<>();
        LinkedList<String> r = new LinkedList<>();
        for (String s : A.split(" ")) {
            hash.put(s, hash.getOrDefault(s, 0) + 1);
        }
        for (String s : B.split(" ")) {
            hash.put(s, hash.getOrDefault(s, 0) + 1);
        }
        for (String key : hash.keySet()) {
            if (hash.get(key) == 1) {
                r.add(key);
            }
        }
        return r.toArray(new String[r.size()]);
    }
}
