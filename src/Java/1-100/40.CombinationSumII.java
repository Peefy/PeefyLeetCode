
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

    void dfs(int[] candidates, List<Integer> path, int gap, 
        List<List<Integer>> res, int start){
        if (gap == 0){
            res.add(new LinkedList<>(path));
            return;
        }
        int previous = -1;
        for (int i = start;i < candidates.length;++i){
            if (previous == candidates[i])
                continue;
            if (gap < candidates[i])
                return;
            previous = candidates[i];
            path.add(candidates[i]);
            dfs(candidates, path, gap - candidates[i], res, i+1);
            path.remove(path.size() - 1);
        }
    }

    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> res = new LinkedList<>();
        if (candidates.length == 0)
            return res;
        List<Integer> path = new LinkedList<>();
        Arrays.sort(candidates);
        dfs(candidates, path, target, res, 0);
        return res;
    }
}
