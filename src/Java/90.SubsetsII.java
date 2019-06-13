
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
    void dfs(List<List<Integer>>  res, LinkedList<Integer> path, int[] nums, int index){
        res.add(new ArrayList<>(path));     
        if (index == nums.length)
            return;
        for (int i = index; i < nums.length; i++){
            if (i > index && nums[i] == nums[i - 1])
                continue;
            path.add(nums[i]);
            dfs(res, path, nums, i + 1);
            path.removeLast();
        }
    }

    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> res = new ArrayList<>();
        LinkedList<Integer> path = new LinkedList<>();
        dfs(res, path, nums, 0);
        return res;
    }
}
