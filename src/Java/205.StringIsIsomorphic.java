
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
    public boolean isIsomorphic(String s, String t) {
        HashMap<Character, Character> d = new HashMap<>();
        char[] s_arr = s.toCharArray();
        char[] t_arr = t.toCharArray();
        int n = s_arr.length;
        for (int i = 0; i < n; i++) {
            if (d.containsKey(s_arr[i]) == false) {
                if (d.containsValue(t_arr[i]) == true)
                    return false;
                d.put(s_arr[i], t_arr[i]);
            }
            else if(d.get(s_arr[i]) != t_arr[i])
                return false;
        }
        return true;
    }
}
