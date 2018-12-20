
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int[] shortestToChar(String S, char C) {
        LinkedList<Integer> indexlist = new LinkedList<>();
        int[] r = new int[S.length()];   
        int j = 1;
        for (int i = 0; i < S.length(); i++)
        {
            if (C == S.charAt(i))
                indexlist.addLast(i);
        }
        indexlist.addFirst(-10000);
        indexlist.addLast(10000); 
        for (int i = 0; i < S.length(); i++)
        {
            if (C == S.charAt(i)){
                ++j;
            }
            else
                r[i] = Math.min(i - indexlist.get(j - 1), indexlist.get(j) - i);
        }
        return r;
    }
}
