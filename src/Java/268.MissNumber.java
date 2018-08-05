
import java.awt.List;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;

class Solution {
    public int missingNumber(int[] nums) {
        int xor = 0 ;
        for(int i = 0; i<nums.length; i++){
            xor = xor ^ i ^ nums[i];
        }  
        return xor ^ nums.length;
    }
}
