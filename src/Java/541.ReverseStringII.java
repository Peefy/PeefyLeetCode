

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
    public String reverseStr(String s, int k) {
        char[] strlist = s.toCharArray();
        int n = strlist.length;
        int i = 0;
        while (i < n){
            if (i + k > n - 1){
                for (int j = i; j < (i + n) / 2; j++) {
                    int m = n - 1 - j + i;
                    char tmp = strlist[j];
                    strlist[j] = strlist[m];
                    strlist[m] = tmp;
                }
            }
            else{
                for (int j = i; j < (i + i + k) / 2; j++) {
                    int m = i + k - 1 - j + i;
                    char tmp = strlist[j];
                    strlist[j] = strlist[m];
                    strlist[m] = tmp;
                }
            }
            i += 2 * k;
        }
        return String.valueOf(strlist);
    }
}
