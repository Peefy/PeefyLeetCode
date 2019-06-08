
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.Combinations
{
public class Solution {
    public void Recursive(IList<IList<int>> ans, List<int> tmp, int n, int k, int index){
        if (tmp.Count == k){
            ans.Add(new List<int>(tmp));
            return;
        }
        for (int i = index; i < n + 1; i++) {
            tmp.Add(i);
            Recursive(ans, tmp, n, k, i + 1);
            tmp.RemoveAt(tmp.Count - 1);
        }
    }
    public IList<IList<int>> Combine(int n, int k) {
        IList<IList<int>> ans = new List<IList<int>>();
        Recursive(ans, new List<int>(), n, k, 1);
        return ans;
    }
}
}