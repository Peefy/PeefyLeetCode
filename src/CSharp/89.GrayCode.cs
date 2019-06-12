
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.GrayCode
{
public class Solution {
    public IList<int> GrayCode(int n) {
        List<int> ans = new List<int>();
        int count = 1 << n;
        for (int i = 0; i < count; i++){
            ans.Add(i ^ i >> 1);
        }
        return ans;
    }
}
}