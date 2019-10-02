
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.FactorCombinations
{
    public class Solution
    {
        private void find(int from, int n, int[] factors, int len, List<List<int>> results)
        {
            for (int i = from; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    factors[len] = i;
                    find(i, n / i, factors, len + 1, results);
                }
            }
            if (len > 0)
            {
                factors[len] = n;
                int[] f = new int[len + 1];
                for (int i = 0; i <= len; i++) f[i] = factors[i];
                results.Add(f.ToList());
            }
        }
        public List<List<int>> GetFactors(int n)
        {
            int p = 0;
            for (int i = 1; i <= n; p++, i *= 2) ;
            List<List<int>> results = new List<List<int>>();
            find(2, n, new int[p], 0, results);
            return results;
        }
    }

}