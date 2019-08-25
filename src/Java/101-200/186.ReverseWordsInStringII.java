
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
    public String reverseWords(String s) {
        List<String> words = Arrays.asList(s.split(" "));
        Collections.reverse(words);
        return String.join(" ", words);
    }
}
