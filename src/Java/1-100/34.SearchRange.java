
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;


class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] res = new int[]{-1,-1};
        if(nums.length == 0) return res;
        for(int i=0;i<nums.length;i++){
            if(target == nums[i]){
                res[0] = i;
                break;
            }a
        }
        for(int i=nums.length-1;i>=0;i--){
            if(target == nums[i]){
                res[1] = i;
                break;
            } 
        }
        return res;
    }
}