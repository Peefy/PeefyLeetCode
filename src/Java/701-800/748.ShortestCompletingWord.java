
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
    public int stringCount(String s, char c){
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == c){
                count++;
            }
        }
        return count;
    }

    public String shortestCompletingWord(String licensePlate, String[] words) {
        HashMap<Character, Integer> hash = new HashMap<>();
        licensePlate = licensePlate.toLowerCase();
        for (char c : licensePlate.toCharArray()) {
            if ('a' <= c && c <= 'z')
                hash.put(c, hash.getOrDefault(c, 0) + 1);
        }
        int minlen = 16;
        String ret ="";
        for (String w : words){  
            if (w.length() >= minlen) {
                continue;
            }
            boolean candidate = true;
            for (char c : hash.keySet()) {
                if (stringCount(w, c) < hash.get(c)) {
                    candidate = false;
                    break;
                }
            }
            if (candidate == true){
                ret = w;
                minlen = w.length();
            }
        }
        return ret;
    }
}
