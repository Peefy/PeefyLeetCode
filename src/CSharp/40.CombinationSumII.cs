using System;
using System.Collections.Generic;

namespace PeefyLeetCode.CombinationSumII
{
public class Solution {
    void dfs(int[] candidates, List<int> path, int gap, 
        IList<IList<int>> res, int start){
        if (gap == 0){
            res.Add(new List<int>(path));
            return;
        }
        int previous = -1;
        for (int i = start;i < candidates.Length;++i){
            if (previous == candidates[i])
                continue;
            if (gap < candidates[i])
                return;
            previous = candidates[i];
            path.Add(candidates[i]);
            dfs(candidates, path, gap - candidates[i], res, i+1);
            path.RemoveAt(path.Count - 1);
        }
    }
    public IList<IList<int>> CombinationSum2(int[] candidates, int target) {
        IList<IList<int>> res = new List<IList<int>>();
        if (candidates.Length == 0)
            return res;
        List<int> path = new List<int>();
        Array.Sort(candidates);
        dfs(candidates, path, target, res, 0);
        return res;
    }
}
}