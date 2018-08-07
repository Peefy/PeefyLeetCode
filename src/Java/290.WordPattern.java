
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
    public boolean wordPattern(String pattern, String str) {
        str = str.replace(' ', '|');
        String[] strs = str.split("|");
        int strscount = strs.length;
        int pcount = pattern.length();
        if (strscount != pcount)
            return false;
        HashMap<Character, String> hash = new HashMap<>();
        for (int i = 0; i < pcount; i++) {
            Character c = pattern.charAt(i);
            String s = strs[i];
            if (hash.containsKey(c) == false){
                if (hash.containsValue(s) == true) {
                    return false;
                }
                hash.put(c, s);
            }
            else{
                if (hash.get(c) != s)
                    return false;
            }
        }
        return true;
    }
}
