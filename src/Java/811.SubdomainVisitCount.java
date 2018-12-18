
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
    public List<String> subdomainVisits(String[] cpdomains) {
        HashMap<String, Integer> counter = new HashMap<>();
        LinkedList<String> r = new LinkedList<>();
        for (String cp : cpdomains) {
            String[] tmps = cp.split(" ");
            int num = Integer.valueOf(tmps[0]);
            String addrone = tmps[1];
            counter.put(addrone, counter.getOrDefault(addrone, 0) + num);
            for (int i = 0; i < addrone.length(); i++) {
                if (addrone.charAt(i) == '.'){
                    String sub = addrone.substring(i + 1);
                    counter.put(sub, counter.getOrDefault(sub, 0) + num);
                }
            }
        }
        for (String key : counter.keySet()) {
            r.add(String.format("%s %s", counter.get(key), key));
        }
        return r;
    }
}
