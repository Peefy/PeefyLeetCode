
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

    public void subs(int[] nums, int index, List<List<Integer>> res, LinkedList<Integer> tmp, int n){
        res.add(tmp);
        for (int i = index; i < n; i++) {
            LinkedList<Integer> newtmp = new LinkedList<>(tmp);
            newtmp.add(nums[i]);
            subs(nums, i + 1, res, newtmp, n);
        }
    }

    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> res = new LinkedList<>();
        int n = nums.length;
        subs(nums, 0, res, new LinkedList<>(), n);
        return res;
    }
}