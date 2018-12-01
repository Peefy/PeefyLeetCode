
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
    public boolean hasAlternatingBits(int n) {
        int s1 = 1;
        int s2 = 2;       
        int t = 17;
        while (--t > 0){
            if(s1 ==n || s2 == n){
                return true;
            }
            s1 = s1 * 4 + 1;
            s2 = s2 * 4 + 2;    
        }   
        return false;
    }
}
