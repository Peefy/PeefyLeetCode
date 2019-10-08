
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
import java.util.Stack;

public class Solution {
    public int[] singleNumber(int[] nums) {
        int sign = 0;
        for (int i = 0; i < nums.length; i++) {
            sign ^= nums[i];
        }
        sign &= -sign;
        int[] result = new int[2];
        for (int i = 0; i < nums.length; i++) {
            if ((nums[i] & sign) == sign)
                result[0] ^= nums[i];
            else
                result[1] ^= nums[i];
            ;
        }
        return result;
    }
}
