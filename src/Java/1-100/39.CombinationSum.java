
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
    List<List<Integer>> ans = new LinkedList<>();
    List<Integer> t = new LinkedList<>();

    void dfs(int i, int j, int[] v){
        if(j == 0){
            ans.add(new LinkedList<>(t));
            return;
        }
        if(i == v.length)
            return;    
        if(j >= v[i]){
            t.add(v[i]);
            dfs(i, j - v[i], v);
            t.remove(t.size() - 1);
        }
        dfs(i + 1, j, v);
        return;
    }

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        dfs(0, target, candidates);
        return ans;
    }
}