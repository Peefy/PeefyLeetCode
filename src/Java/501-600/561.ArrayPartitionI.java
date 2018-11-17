

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
    public int arrayPairSum(int[] nums) {
        Arrays.sort(nums);
        for (int i = 2; i < nums.length; i += 2) {
            nums[0] += nums[i];
        }
        return nums[0];
    }
}