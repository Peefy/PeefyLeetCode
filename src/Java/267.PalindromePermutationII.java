
import java.util.List;
import java.util.TreeSet;
import java.util.Map.Entry;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;
import java.util.Stack;


class Solution {
    public List<String> generatePalindromes(String s) {
        List<String> ans = new ArrayList<>();
        HashMap<Character, Integer> h = new HashMap<>();
        char center = '\0';
        for (char c : s.toCharArray()) {
            if (h.containsKey(c) == false) {
                h.put(c, 1);
            }
            else {
                h.replace(c, h.get(c) + 1);
            }
            for (Entry<Character, Integer> kv : h.entrySet()) {
                if (kv.getValue() % 2 == 1) {
                    if (center != '\0')
                        return ans;
                    center = kv.getKey();
                }
            }
        }
        String cur = "";
        if (center != '\0') {
            h.replace(center, h.get(center) - 1);
            if (h.get(center) == 0)
                h.remove(center);
            cur = cur + center;
        }
        permute(cur, h, ans);
        return ans;
    }

    public void permute(String cur, HashMap<Character, Integer> h, List<String> ans) {
        if (h.size() == 0) {
            ans.add(cur);
            return;
        }
        for (Entry<Character, Integer> kv : h.entrySet()) {
            String n = kv.getKey() + cur + kv.getKey();
            char k = kv.getKey();
            h.replace(k, h.get(k) - 2);
            if (h.get(k) == 0)
                h.remove(k);
            permute(n, h, ans);
            if (h.containsKey(k) == false) {
                h.put(k, 2);
            }
            else {
                h.replace(k, h.get(k) + 2);
            }
        }
    }
}
