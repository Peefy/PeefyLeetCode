
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
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans = new LinkedList<>();
        int[] visited = new int[nums.length];      
        List<Integer> path = new LinkedList<>();
        dfs(ans, visited, path, nums);
        return ans;
    }

    void dfs(List<List<Integer>> ans, int[] visited, List<Integer> path, int[] nums){
        if (path.size() == nums.length)
            ans.add(new LinkedList<>(path));
        else{
            for (int i = 0;i < nums.length;++i){
                if (visited[i] == 0){
                    visited[i] = 1;
                    path.add(nums[i]);
                    dfs(ans, visited, path, nums);
                    path.remove(path.size() - 1);
                    visited[i] = 0;
                }
            }
        }
    }
}
