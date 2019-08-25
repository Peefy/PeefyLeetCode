
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Solution {
    public int singleNumber(int[] nums) {
        int b1 = 0,b2 = 0;
        for (int n : nums){
            b1 = (b1 ^ n) & ~ b2; 
            b2 = (b2 ^ n) & ~ b1;
        }
        return b1;
    }
}

