
import java.util.List;
import java.util.TreeSet;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;
import java.util.Random;


class Solution {
    public int[] productExceptSelf(int[] nums) {
        int[] res = new int[nums.length];
        int p = 1, q = 1;
        for (int i = 0; i < nums.length; i++) {
            res[i] = p;
            p *= nums[i];
        }
        for (int i = nums.length - 1; i > 0 ; i--) {
            q *= nums[i];
            res[i - 1] *= q;
        }
        return res;
    }
}



