

import java.awt.List;
import java.lang.annotation.Retention;
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
    public int countSegments(String s) {
        int count = 0;
        char[] s_arr = s.toCharArray();
        int n = s_arr.length;
        boolean lastischar = false;
        for (int i = 0; i < n; i++) { 
            if (s_arr[i] != ' ' && lastischar == false){
                count += 1;
                lastischar = true;
            }              
            else if (s_arr[i] == ' ' && lastischar == true)
                lastischar = false;
        }
        return count;
    }
}


                
        
