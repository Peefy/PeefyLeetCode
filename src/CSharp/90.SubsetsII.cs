
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.SubsetsII
{
public class Solution {
    void Dfs(IList<IList<int>> res, List<int> path, int[] nums, int index){
        res.Add(new List<int>(path));     
        if (index == nums.Length)
            return;
        for (int i = index; i < nums.Length; i++){
            if (i > index && nums[i] == nums[i - 1])
                continue;
            path.Add(nums[i]);
            Dfs(res, path, nums, i + 1);
            path.RemoveAt(nums.Length - 1);
        }
    }
    public IList<IList<int>> SubsetsWithDup(int[] nums) {
        Array.Sort(nums);
        List<IList<int>> res = new List<IList<int>>();
        List<int> path = new List<int>();
        Dfs(res, path, nums, 0);
        return res;
    }
}
}