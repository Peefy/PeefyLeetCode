
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
    public int findLengthOfLCIS(int[] nums) {
        int count = 0;
        int maxcount = 0;
        int last = -9999999;
        for (int num : nums){
            if (num > last)
                count += 1;
            else
                count = 1;
            if (count > maxcount)
                maxcount = count;
            last = num;
        }
        return maxcount; 
    }
}

