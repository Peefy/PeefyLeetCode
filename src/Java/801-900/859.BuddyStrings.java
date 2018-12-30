
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
    public boolean buddyStrings(String A, String B) {
        if (A.length() != B.length())
            return false;
        LinkedList<Character> r = new LinkedList<>();
        HashSet<Character> s = new HashSet<>();
        for (int i = 0;i < A.length();++i){
            s.add(A.charAt(i));
            if (A.charAt(i) != B.charAt(i)){
                r.add(A.charAt(i));
                r.add(B.charAt(i));
            }
        }
        if (r.size() == 0 && s.size() < A.length())
            return true;
        if (r.size() != 4)
            return false;
        return r.get(0) == r.get(3) && r.get(1) == r.get(2); 
    }
}
