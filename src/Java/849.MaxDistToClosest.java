
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
    public int maxDistToClosest(int[] seats) {
        int count = 0;
        int maxcount = 0;
        int firstindex = 0;   
        for(int i = 0; i < seats.length; i++){
            if (seats[i] == 1){
                firstindex = i;
                break;
            }    
        }
        for(int i = 0; i < seats.length; i++){
            if (seats[i] == 1){
                if (count > maxcount)
                    maxcount = count;
                count = 0;
            }
            else
                ++count;
        }
        return Math.max((maxcount + 1) / 2, Math.max(count, firstindex));
    }
}
