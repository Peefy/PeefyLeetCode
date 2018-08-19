
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
    public int arraysCount(char[] arr, char element){
        int count = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == element)
                ++count;
        }
        return count;
    }

    public boolean canConstruct(String ransomNote, String magazine) {
        char[] r_arr = ransomNote.toCharArray();
        char[] m_arr = magazine.toCharArray();
        HashSet<Character> s = new HashSet<>();
        for (int i = 0; i < r_arr.length; i++) {
            s.add(r_arr[i]);
        }
        for (Character c: s) {
            if(arraysCount(r_arr, c) > arraysCount(m_arr, c))
                return false;
        }
        return true;
    }
}

