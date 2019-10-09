
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.GraphValidTree
{

    public class Solution
    {
        public bool ValidTree(int n, List<KeyValuePair<int, int>> edges)
        {
            if (n != edges.Count + 1)
                return false;
            int[] par = new int[n];
            for (int i = 0; i < par.Length; i++)
            {
                par[i] = i;
            }
            foreach (var edge in edges)
            {
                int par1 = edge.Key;
                int par2 = edge.Value;
                while (par[par1] != par1)
                    par1 = par[par1];
                while (par[par2] != par2)
                    par2 = par[par2];
                if (par1 != par2)
                {
                    par[par2] = par1;
                    n--;
                }
            }
            return n == 1;
        }
    }
}