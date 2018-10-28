
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int findContentChildren(int[] g, int[] s) {
        int count = 0;
        int i = 0;
        Arrays.sort(g);
        Arrays.sort(s);
        for (int c : s) {
            if (c >= g[i]){
                count +=1;
                if (i < g.length - 1)
                    i += 1;
                else
                    break;
            }           
        }
        return count;
    }
}
