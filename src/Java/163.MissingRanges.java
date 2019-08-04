
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

public class Solution {
    List<String> findMissingRanges(int[] nums, int lower, int upper) {
        long expected = lower, newUpper = upper;
        List<String> ret = new LinkedList<>();
        for (int i = 0; i <= nums.length; i++) {
            if (i < nums.length && nums[i] < expected)
                continue;
            long val = (i == nums.length) ? newUpper + 1 : nums[i];
            if (expected != val && expected + 1 == val) {
                ret.add(String.valueOf(expected));
            } else if (expected != val) {
                ret.add(String.valueOf(expected) + "->" + String.valueOf(val - 1));
            }
            expected = val + 1;
        }
        return ret;
    }
}
