
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
    public int pivotIndex(int[] nums) {
        int total = 0;
        int n = nums.length;
        int suml = 0;
        for (int i = 0; i < n; i++) {
            total += nums[i];
        }
        for (int i = 0; i < n; i++) {
            if ((suml << 1) + nums[i] != total)
                suml += nums[i];
            else
                return i;
        }
        return -1;
    }
}
