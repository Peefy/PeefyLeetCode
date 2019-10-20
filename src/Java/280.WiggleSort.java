
import java.util.List;
import java.util.TreeSet;
import java.util.Map.Entry;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;
import java.util.Stack;


class Solution {
    public void wiggleSort(int[] nums) {
        for (int i = 1; i < nums.length; ++i) {
            if ((i % 2 == 0 && nums[i - 1] < nums[i]) || 
                (i % 2 == 1 && nums[i - 1] > nums[i])) {
                int temp = nums[i - 1];
                nums[i - 1] = temp;
                nums[i] = nums[i - 1];
            }       
        }
    }
}

