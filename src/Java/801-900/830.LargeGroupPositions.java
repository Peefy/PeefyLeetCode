
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
    public List<List<Integer>> largeGroupPositions(String S) {
        LinkedList<List<Integer>> r = new LinkedList<>();
        S += ' ';
        int ISBIG = 3;
        int lastindex = 0;
        int count = 0;
        for (int i = 0; i < S.length() - 1; i++) {
            if (S.charAt(i) != S.charAt(i + 1)){
                if (count >= ISBIG - 1){
                    LinkedList<Integer> res = new LinkedList<>();
                    res.add(lastindex);
                    res.add(lastindex + count);
                    r.add(res);
                }
                count = 0;
                lastindex = i + 1;
            }
            else
                count += 1;
        }           
        return r;
    }
}
