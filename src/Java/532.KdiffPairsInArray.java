

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
    public int findPairs(int[] nums, int k) {
        int count = 0;
        if(k < 0)
            return count;
        HashMap<Integer,Integer> hm = new HashMap<>();
        for(int i = 0; i < nums.length; i++){
            hm.put(nums[i],i);
        }
        for(int i = 0; i < nums.length; i++){
            if(hm.containsKey(nums[i] + k) && hm.get(nums[i]+k) != i){
                count++;
                hm.remove(nums[i] + k);
            }
        }
        return count;
    }
}
