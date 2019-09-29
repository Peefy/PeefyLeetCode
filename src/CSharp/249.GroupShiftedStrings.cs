
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.GroupShiftedStrings
{

class Solution {
    public List<List<string>> GroupStrings2(string[] strings) {
        List<List<string>> res = new List<List<string>>();
        Dictionary<string, List<string>> m = new Dictionary<string, List<string>>();
        foreach (var a in strings) {
            StringBuilder sb = new StringBuilder();
            foreach (var c in a) {
                sb.Append((c + 26 - a[0]) % 26);
                sb.Append(",");
            }
            var t = sb.ToString();
            if(m.ContainsKey(t) == true)
                m[t].Add(a);
            else {
                m.Add(t, new List<string>());
                m[t].Add(a);
            }
        }
        res.AddRange(m.Values.ToList());
        return res;
    }
}

}