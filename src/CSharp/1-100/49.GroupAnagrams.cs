using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.GroupAnagrams
{
    public class Solution {
    public IList<IList<string>> GroupAnagrams(string[] strs) {
        Dictionary<string, int> hash = new Dictionary<string, int>();
        List<IList<string>> ans = new List<IList<string>>();
        int count = 0;
        foreach (string s in strs){
            char[] sarr = s.ToCharArray();
            string tmp = new string(sarr);  
            Array.Sort(sarr);
            var ss = new string(sarr);
            if (hash.ContainsKey(ss) == false){
                hash.Add(ss, count);
                count += 1;
                List<string> arr = new List<string>();
                arr.Add(tmp);
                ans.Add(arr);
            }
            else
                ans[hash[ss]].Add(tmp);
        }
        return ans;
    }
}
}