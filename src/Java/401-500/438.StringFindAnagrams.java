import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;

class Solution {
    public boolean counterEquans(int[] s, int[] p){
        for (int i = 0; i < 26; i++) {
            if (s[i] != p[i])
                return false;
        }
        return true;
    }

    public List<Integer> findAnagrams(String s, String p) {
        ArrayList<Integer> r = new ArrayList<>();
        int m = s.length();
        int n = p.length();
        if (m < n)
            return r;
        int[] s_counter = new int[26];
        int[] p_counter = new int[26];
        for (int i = 0;i < n; ++i){
            p_counter[p.charAt(i) - 'a']++;
            s_counter[s.charAt(i) - 'a']++;
        }
        if (counterEquans(s_counter, p_counter)){
            r.add(0);
        }
        for (int i = 0;i < m - n;++i){
            s_counter[s.charAt(i) - 'a']--;
            s_counter[s.charAt(i + n) - 'a']++;
            if (counterEquans(s_counter, p_counter)){
                r.add(i + 1);
            }
        }
        return r;
    }
}
