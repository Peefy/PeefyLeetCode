
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
    public int maximumProduct(int[] nums) {
        int max_1 = -Integer.MAX_VALUE;
        int max_2 = -Integer.MAX_VALUE;
        int max_3 = -Integer.MAX_VALUE;
        int min_1 = Integer.MAX_VALUE;
        int min_2 = Integer.MAX_VALUE;
        for (int num : nums) {
            if (num > max_1){
                max_3 = max_2;
                max_2 = max_1;
                max_1 = num;
            }
            else if (num > max_2){
                max_3 = max_2;
                max_2 = num;
            }
            else if (num > max_3)
                max_3 = num;
            if (num < min_1){
                min_2 = min_1;
                min_1 = num;
            }
            else if (num < min_2)
                min_2 = num;
        }
        return Math.max(max_1 * max_2 * max_3, max_1 * min_1 * min_2);
    }
}

