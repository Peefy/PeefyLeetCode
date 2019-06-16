
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.Subsets
{

public class Solution {
    void subs(int[] nums, int index, IList<IList<int>> res, List<int> tmp, int n){
        res.Add(tmp);
        for (int i = index; i < n; i++) {
            var newtmp = new List<int>(tmp);
            newtmp.Add(nums[i]);
            subs(nums, i + 1, res, newtmp, n);
        }
    }
    public IList<IList<int>> Subsets(int[] nums) {
        var res = new List<IList<int>>();
        int n = nums.Length;
        subs(nums, 0, res, new List<int>(), n);
        return res;
    }
}
}