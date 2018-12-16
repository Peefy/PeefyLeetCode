
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
    public String longestWord(String[] words) {
        HashSet<String> wordSet = new HashSet<>();
        String result = "";
        for (String word : words){
            wordSet.add(word);
        }
        for (String word : words){
            if (word.length() > result.length() || word.length() == result.length() && word.compareTo(result) <= 0){
                int k = 1;
                int n = word.length();
                for (; k < n; ++k){
                    if (wordSet.contains(word.substring(0, k)) == false)
                        break; 
                }
                if (k == n)
                    result = word;
            }
        }
        return result;
    }
}
