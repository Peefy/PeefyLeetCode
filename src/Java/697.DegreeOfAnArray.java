
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
    public int findShortestSubArray(int[] nums) {
        HashMap<Integer, Integer[]> hash = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            if (hash.containsKey(nums[i]) == false){
                hash.put(nums[i], new Integer[]{1, i, i});
            }
            else{
                Integer[] counts = hash.get(nums[i]);
                counts[0] += 1;
                counts[2] = i;
            }
        }
        int maxcount = 0;
        int minlength = 50000;
        for (Integer[] counts : hash.values()){
            int dis = counts[2] - counts[1] + 1;
            if (counts[0] > maxcount){
                maxcount = counts[0];
                minlength = dis;
            }
            else if (counts[0] == maxcount && dis < minlength)
                minlength = dis;
        }
        return minlength;
    }
}
