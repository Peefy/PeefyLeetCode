
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
    public int removeDuplicates(int[] nums) {
        int i = 0;
        int k = 2;
        for (int n : nums) {
            if (i < k || n != nums[i - k]){
                nums[i] = n;
                i += 1;
            }
        }
        return i;
    }
}
