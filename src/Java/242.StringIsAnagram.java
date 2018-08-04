
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
    public boolean isAnagram(String s, String t) {
        char[] s_arr = s.toCharArray();
        char[] t_arr = t.toCharArray();
        int s_len = s_arr.length;
        int t_len = t_arr.length;
        if (s_len != t_len)
            return false;
        HashMap<Character, Integer> hash = new HashMap<>();
        for (int i = 0; i < s_len; i++) {
            if (hash.containsKey(s_arr[i]) == false) {
                hash.put(s_arr[i], 1);
            }
            else{
                Integer count = hash.get(s_arr[i]);
                hash.remove(s_arr[i]);
                hash.put(s_arr[i], count + 1);
            }
        }
        for (int i = 0; i < t_len; i++) {
            if (hash.containsKey(t_arr[i]) == false) {
                return false;
            }
            else{
                Integer count = hash.get(t_arr[i]);
                if (count == 0)
                    return false;
                hash.remove(t_arr[i]);
                hash.put(t_arr[i], count - 1);
            }
        }
        return true;
    }
}
