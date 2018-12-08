
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
    public int dominantIndex(int[] nums) {
        int maxnum = -1;
        int secondmaxnum = -1;
        int maxindex = 0;
        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];
            if (num > maxnum){
                secondmaxnum = maxnum;
                maxnum = num;
                maxindex = i;
            }
            else if (num > secondmaxnum)
                secondmaxnum = num;
        }
        return maxnum >= 2 * secondmaxnum ? maxindex : -1;
    }
}
