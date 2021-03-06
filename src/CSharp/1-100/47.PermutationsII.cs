using System;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.PermutationsII
{
public class Solution {
    void dfs(IList<IList<int>> ans, int[] visited, IList<int> path, int[] nums){
        HashSet<int> hash = new HashSet<int>();
        if (path.Count == nums.Length)
            ans.Add(new List<int>(path));
        else{
            for (int i = 0;i < nums.Length;++i){
                if (visited[i] == 0 && hash.Contains(nums[i]) == false){
                    hash.Add(nums[i]);
                    visited[i] = 1;
                    path.Add(nums[i]);
                    dfs(ans, visited, path, nums);
                    path.RemoveAt(path.Count - 1);
                    visited[i] = 0;
                }
            }
        }
    }
    public IList<IList<int>> PermuteUnique(int[] nums) {
        IList<IList<int>> ans = new List<IList<int>>();
        int[] visited = new int[nums.Length];      
        IList<int> path = new List<int>();
        dfs(ans, visited, path, nums);
        return ans;
    }
}
}