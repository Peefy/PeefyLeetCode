
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.SubdomainVisits
{
public class Solution {
    public IList<string> SubdomainVisits(string[] cpdomains) {
        Dictionary<string, int> counter = new Dictionary<string, int>();
        List<string> r = new List<string>();
        foreach (var cp in cpdomains) {
            String[] tmps = cp.Split(" ");
            int num = int.Parse(tmps[0]);
            string addrone = tmps[1];
            if (counter.ContainsKey(addrone) == false)
            {
                counter.Add(addrone, num);
            }
            else
            {
                counter[addrone] += num;
            }
            for (int i = 0; i < addrone.Length; i++) {
                if (addrone[i] == '.'){
                    String sub = addrone.Substring(i + 1);
                    if (counter.ContainsKey(sub) == false)
                    {
                        counter.Add(sub, num);
                    }
                    else
                    {
                        counter[sub] += num;
                    }
                }
            }
        }
        foreach (string key in counter.Keys) {
            r.Add($"{counter[key]} {key}");
        }
        return r;
    }
}
}

