
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.PalindromePermutationII
{

    public class Solution
    {
        public List<string> generatePalindromes(string s)
        {
            var ans = new List<string>();
            var h = new Dictionary<char, int>();
            char center = '\0';
            foreach (var c in s)
            {
                if (h.ContainsKey(c) == false)
                {
                    h.Add(c, 1);
                }
                else
                {
                    h[c] += 1;
                }
                foreach (var kv in h)
                {
                    if (kv.Value % 2 == 1)
                    {
                        if (center != '\0')
                            return ans;
                        center = kv.Key;
                    }
                }
            }
            string cur = "";
            if (center != '\0')
            {
                h[center] += 1;
                if (h[center] == 0)
                    h.Remove(center);
                cur = cur + center;
            }
            permute(cur, h, ans);
            return ans;
        }

        private void permute(string cur, Dictionary<char, int> h, List<string> ans)
        {
            if (h.Count == 0)
            {
                ans.Add(cur);
                return;
            }
            foreach (var kv in h)
            {
                var n = kv.Key + cur + kv.Key;
                var k = kv.Key;
                h[k] -= 2;
                if (h[k] == 0)
                    h.Remove(k);
                permute(n, h, ans);
                if (h.ContainsKey(k) == false)
                {
                    h.Add(k, 2);
                }
                else
                {
                    h[k] += 2;
                }
            }
        }
    }
}