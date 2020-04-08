
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    private HashMap<String, HashSet<String>> abbrs = new HashMap<>();
 
    private String abbr(String word) {
        if (word.length() <= 2) return word;
        StringBuilder sb = new StringBuilder();
        sb.append(word.charAt(0));
        sb.append(word.length()-2);
        sb.append(word.charAt(word.length()-1));
        return sb.toString();
    }

    public Solution(String[] dictionary) {
        for(String word: dictionary) {
            String abbr = abbr(word);
            HashSet<String> words = abbrs.get(abbr);
            if (words == null) {
                words = new HashSet<>();
                abbrs.put(abbr, words);
            }
            words.add(word);
        }
    }
 
    public boolean isUnique(String word) {
        HashSet<String> words = abbrs.get(abbr(word));
        if (words == null || words.isEmpty()) return true;
        if (words.size() == 1 && words.contains(word)) return true;
        return false;
    }
}

