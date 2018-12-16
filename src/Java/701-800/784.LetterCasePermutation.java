
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;

class Solution {
    public List<String> letterCasePermutation(String S) {
        LinkedList<String> results = new LinkedList<>();
        results.add(""); 
        for (char x : S.toCharArray()){
            if ('0' <= x && x <= '9'){
                for (int i = 0; i < results.size(); i++)
                {
                    results.set(i, results.get(i) + x);
                }
            }
            else{
                LinkedList<String> temp = new LinkedList<>();
                for (int i = 0; i < results.size(); i++)
                {
                    temp.add(results.get(i) + x);
                    temp.add(results.get(i) + (char)(x ^ (1 << 5)));
                }
                results = temp;
            }
        }
        return results;
    }
}

