using System;
using System.Collections.Generic;

namespace PeefyLeetCode.CombinationSum
{
public class Solution {
    List<IList<int>> ans = new List<IList<int>>();
    List<int> t = new List<int>();
    void Dfs(int i, int j, int[] v){
        if(j == 0){
            ans.Add(new List<int>(t));
            return;
        }
        if(i == v.Length)
            return;    
        if(j >= v[i]){
            t.Add(v[i]);
            Dfs(i, j - v[i], v);
            t.RemoveAt(t.Count - 1);
        }
        Dfs(i + 1, j, v);
        return;
    }
    public IList<IList<int>> CombinationSum(int[] candidates, int target) {
        Dfs(0, target, candidates);
        return ans;
    }
}
}