
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;


class Solution {
    public List<String> findRepeatedDnaSequences(String s) {
        HashSet<String> result = new HashSet<>();
        if (s.length() <= 10) 
            return new LinkedList<>(result);
        HashSet<String> seqs = new HashSet<>();
        for (int i = 0; i + 10 <= s.length(); ++i){
            String cur_seq = s.substring(i, i + 10);
            if (seqs.contains(cur_seq)) 
                result.add(cur_seq);
            seqs.add(cur_seq);
        }
        return new LinkedList<>(result);
    }
}
