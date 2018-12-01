
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
    public boolean checkPossibility(int[] nums) {
        if (nums.length <= 2) 
            return true;
        int count = nums[0] <= nums[1] ? 0 : 1;
        for (int i = 2; i < nums.length; i++) {
            if (nums[i - 1] > nums[i]){
                count += 1;
                if (count > 1)
                    return false;
                if (nums[i - 2] > nums[i]) 
                    nums[i] = nums[i - 1];  
                else
                    nums[i - 1] = nums[i - 2]; 
            }
        }      
        return count <= 1;
    }
}

