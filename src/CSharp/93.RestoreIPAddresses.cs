
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.RestoreIpAddresses
{
public class Solution {
    public void recursive(List<string> ans, List<string> tmp, char[] s, int l, int index){
        if (tmp.Count == 4 && l == s.Length){
            ans.Add(String.Join(".", tmp));
            return;
        }
        for (int i = index; i < 4; i++) {
            for (int j = 1; j < 4; j++) {
                if (l + j > s.Length || (s[l] == '0' && j > 1))
                    continue;
                int num = 0;
                for (int k = 0; k < j; ++k) {
                    num = num * 10 + s[l + k] - '0';
                }
                if (num > 255)
                    continue;
                l += j;
                tmp.Add(num.ToString());
                recursive(ans, tmp, s, l, i + 1);
                tmp.RemoveAt(tmp.Count - 1);
                l -= j;
            }
        }
    }
    public IList<string> RestoreIpAddresses(string s) {
        List<string> ans = new List<string>();
        List<String> tmp = new List<string>();
        recursive(ans, tmp, s.ToCharArray(), 0, 0);
        return ans;
    }
}
}