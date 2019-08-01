
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;



public class Solution {
    public boolean isOneEditDistance(String s, String t) {
        if (s == null && t == null) return false;
        if (s == null) return t.length() == 1;
        if (t == null) return s.length() == 1;
        if (s.length() < t.length()) {
            String temp = s;
            s = t;
            t = temp;
        }
        if (s.length() == 1 && t.length() == 0) return true;
        if (s.length() > t.length() + 1) return false;
        if (s.length() == t.length()) {
            int dist = 0;
            for(int i=0; i<s.length(); i++) {
                if (s.charAt(i) != t.charAt(i)) {
                    dist ++;
                    if (dist > 1) return false;
                }
            }
            return dist == 1;
        } else {
            int dist = 0;
            for(int i=0; i<t.length(); i++) {
                if (t.charAt(i) == s.charAt(i+dist)) continue;
                dist ++;
                if (dist > 1) return false;
                if (t.charAt(i) == s.charAt(i+dist)) continue;
                return false;
            }
            return dist <= 1;
        }
    }
}


