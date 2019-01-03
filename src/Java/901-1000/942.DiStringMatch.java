
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
    public int[] diStringMatch(String S) {
        int left = 0;
        int right = S.length();
        int[] r = new int[right + 1];
        int i = 0;
        for (char s : S.toCharArray()){
            if (s == 'D'){
                r[i++] = right;
                right -= 1;
            }
            else{
                r[i++] = left;
                left += 1;
            }
        }
        r[i] = left;
        return r;
    }
}
