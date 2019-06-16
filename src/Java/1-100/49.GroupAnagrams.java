
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
    public List<List<String>> groupAnagrams(String[] strs) {
        HashMap<String, Integer> hash = new HashMap<>();
        List<List<String>> ans = new LinkedList<>();
        int count = 0;
        for (String s : strs){
            String tmp = new String(s);
            char[] sarr = s.toCharArray();
            Arrays.sort(sarr);
            s = new String(sarr);
            if (hash.containsKey(s) == false){
                hash.put(s, count);
                count += 1;
                List<String> arr = new LinkedList<>();
                arr.add(tmp);
                ans.add(arr);
            }
            else
                ans.get(hash.get(s)).add(tmp);
        }
        return ans;
    }
}
