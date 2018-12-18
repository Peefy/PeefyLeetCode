
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
    public String mostCommonWord(String paragraph, String[] banned) {
        char[] parr = paragraph.toCharArray();
        for (int i = 0; i < parr.length; i++) {
            if (parr[i] == '.' || parr[i] == '!' || parr[i] == '?' || 
                parr[i] == ';' || parr[i] == ',' || parr[i] == '\\' ||
                parr[i] == ' ' || parr[i] == '\'' || parr[i] == '\"') {
                parr[i] = ' ';
            }
            else if (parr[i] >= 'A' && parr[i] <= 'Z'){
                parr[i] = (char)(parr[i] + 'a' - 'A');
            }
        }
        paragraph = new String(parr);
        String[] strs = paragraph.split(" ");
        HashMap<String, Integer> hash = new HashMap<>();
        HashSet<String> set = new HashSet<>();
        for (String ban : banned) {
            set.add(ban);
        }
        for (int i = 0; i < strs.length; i++) {
            if (strs[i] != " "){
                hash.put(strs[i], hash.getOrDefault(strs[i], 0) + 1);
            }
        }
        int maxcount = 0;
        String r = "";
        for (String c : hash.keySet()){
            if (set.contains(c) == false && hash.get(c) > maxcount){
                maxcount = hash.get(c);
                r = c;
            }
        }
        return r;
    }
}
