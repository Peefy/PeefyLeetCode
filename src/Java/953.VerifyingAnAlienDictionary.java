
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;

class Solution {
    int[] reOrder;

    boolean compareto(char[] a, char[] b){
        for(int i = 0; i < a.length; ++i)
        {
            if(i >= b.length)
                return false;
            if(reOrder[a[i]-'a'] > reOrder[b[i] - 'a'])
                return false;
            else if (reOrder[a[i]-'a'] < reOrder[b[i]-'a'])
                return true;
            else 
                continue;
        }
        return true;
    }

    public boolean isAlienSorted(String[] words, String order) {
        reOrder = new int[26];
        for (int i = 0;i < 26;++i){
            reOrder[order.charAt(i) - 'a'] = i; 
        } 
        for (int i = 0; i < words.length - 1; ++i){
            if (compareto(words[i].toCharArray(), words[i + 1].toCharArray()) == false)
                return false;
        }           
        return true;
    }
}
