
using System.Collections.Generic;

namespace PeefyLeetCode.StringIsIsomorphic
{
    public class Solution
    {
        public bool IsIsomorphic(string s, string t)
        {
            var d = new Dictionary<char, char>();
            var n = s.Length;
            for (int i = 0; i < n; i++)
            {
                if (d.ContainsKey(s[i]) == false)
                {
                    if (d.ContainsValue(t[i]) == true)
                        return false;
                    d.Add(s[i], t[i]);
                }
                else if (d[s[i]] != t[i])
                    return false;
            }
            return true;
        }
    }
}
