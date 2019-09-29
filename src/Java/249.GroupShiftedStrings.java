
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
    public List<List<String>> groupStrings2(String[] strings) {
        List<List<String>> res= new ArrayList<List<String>>();
        HashMap<String, ArrayList<String>> m = new HashMap<String, ArrayList<String>>();

        for (String a : strings) {
            StringBuilder sb = new StringBuilder();
            for (char c : a.toCharArray()) {
                sb.append((c + 26 - a.charAt(0)) % 26);
                sb.append(",");
            }
            String t =sb.toString();
            if(m.containsKey(t))
                m.get(t).add(a);
            else {
                m.put(t, new ArrayList<>());
                m.get(t).add(a);
            }
        }
        res.addAll(m.values());    
        return res;
    }
}
