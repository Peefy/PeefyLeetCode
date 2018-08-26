

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
    public int longestPalindrome(String s) {
        char[] cs = s.toCharArray();
        int[] counts = new int[58];  
        for (char c : cs) {
            counts[c - 'A'] ++;
        }   
        int res = 0;
        int add = 0;
        for (int i : counts) {      
            res += i / 2 * 2;          
            if (i % 2 != 0) {
                add = 1;
            }
        }       
        return res + add;
    }
}

    