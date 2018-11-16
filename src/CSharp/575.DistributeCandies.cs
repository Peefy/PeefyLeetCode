
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.DistributeCandies
{
    public class Solution
    {
        public int DistributeCandies(int[] candies)
        {
            int[] hash = new int[200001];
            int hashsize = 0;
            foreach (var c in candies)
            {
                if (hash[c + 100000] == 0)
                {
                    hash[c + 100000] = 1;
                    hashsize++;
                }
            }
            return Math.Min(hashsize, candies.Length / 2);
        }
    }
}

