
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

class Solution {
    public char findTheDifference(String s, String t) {
        char[] s_arr = s.toCharArray();
        char[] t_arr = t.toCharArray();
        int[] record = new int[26];
        for (int i = 0; i < s_arr.length; i++) {
            record[s_arr[i] - 'a']++;
        }
        for (int i = 0; i < t_arr.length; i++) {
            record[t_arr[i] - 'a']--;
        }
        for (int i = 0;i < 26;++i){
            if (record[i] == -1)
                return (char)(i + 'a');
        }
        return 'a';
    }
}

