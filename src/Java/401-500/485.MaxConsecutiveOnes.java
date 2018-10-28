
import java.awt.List;
import java.util.LinkedList;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int count = 0, maxcount = 0;
        for (int num : nums) {
            if (num == 1) {
                ++count;
            } else {
                maxcount = count > maxcount ? count : maxcount;
                count = 0;
            }
        }
        return count > maxcount ? count : maxcount;
    }
}
