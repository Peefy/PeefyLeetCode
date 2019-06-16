
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
    public boolean search(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;
        if (right == -1)
            return false;
        int k = 0;
        for (int i = 1; i < right + 1; i++){
            if (nums[i] < nums[i - 1])
                k = i;
        }
        while (left <= right){
            int beforemiddle = (left + right) / 2;
            int middle = beforemiddle + k;
            if (middle >= nums.length)
                middle = middle - nums.length;
            if (target == nums[middle])
                return true;
            else if (target < nums[middle])
                right = beforemiddle - 1;
            else
                left = beforemiddle + 1;
        }
        return false;
    }
}
