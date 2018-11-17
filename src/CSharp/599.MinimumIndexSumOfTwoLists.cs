

using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.MinimumIndexSumOfTwoLists
{
    public class Solution
    {
        public string[] FindRestaurant(string[] list1, string[] list2)
        {
            int m = list1.Length;
            int n = list2.Length;
            int min = m + n;
            var hash = new Dictionary<string, int>();
            var res = new List<string>();
            for (int i = 0; i < n; i++)
            {
                hash.Add(list2[i], i);
            }
            for (int i = 0; i < m; i++)
            {
                if (hash.ContainsKey(list1[i]))
                {
                    if (min > i + hash[list1[i]])
                    {
                        res.Clear();
                        res.Add(list1[i]);
                        min = i + hash[list1[i]];
                    }
                    else if (min == i + hash[list1[i]])
                    {
                        res.Add(list1[i]);
                    }
                }
            }
            return res.ToArray();
        }
    }
}

