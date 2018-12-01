
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.CanPlaceFlowers
{
    public class Solution
    {
        public bool CanPlaceFlowers(int[] flowerbed, int n)
        {
            int count = 0;
            int length = flowerbed.Length;
            int i = 0;
            while (i < length)
            {
                if (flowerbed[i] == 0)
                {
                    if (i == length - 1)
                    {
                        count += 1;
                        i += 1;
                    }
                    else if (flowerbed[i + 1] == 0)
                    {
                        count += 1;
                        i += 1;
                    }
                }
                else if (flowerbed[i] == 1)
                {
                    i += 1;
                }
                if (count >= n)
                    return true;
                i += 1;
            }
            return count >= n;
        }
    }
}

