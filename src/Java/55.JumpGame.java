
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
    public boolean canJump(int[] nums) {
        int i = nums.length - 1;
        for(int j = nums.length - 2; j > -1; j--){
            if (i - j <= nums[j])
                i = j;
        }
        return i == 0;
    }
}
