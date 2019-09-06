
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.CombinationSumIII
{
public class Solution {
    static int MaxIndex = 10;
    public void traceBack(int k, int n, int sum, int begin, List<int> list, List<IList<int>> ans){
        if (k == 0){
            if (n == sum)
                ans.Add(new List<int>(list));
            return;
        }
        for (int i = begin; i < MaxIndex; i++) {
            list.Add(i);
            traceBack(k - 1, n, sum + i, i + 1, list, ans);
            list.RemoveAt(list.Count - 1);
        }
    }
    public IList<IList<int>> CombinationSum3(int k, int n) {
        List<IList<int>> ans = new List<IList<int>>();
        traceBack(k, n, 0, 1, new List<int>(), ans);
        return ans;
    }
}
}