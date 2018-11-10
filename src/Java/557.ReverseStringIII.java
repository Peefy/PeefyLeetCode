

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
    public String reverseWords(String s) {
        String[] strs = s.split(" ");
        for (int i = 0; i < strs.length; ++i){
            strs[i] = new StringBuilder(strs[i]).reverse().toString();  
        }
        return String.join(" ", strs);
    }
}
