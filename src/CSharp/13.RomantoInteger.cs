
using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

namespace RomanToInteger
{
    public class Solution 
    {
        public int RomanToInt(string s) 
        {   
            var symbol = "IVXLCDM";
            int[] value = {1, 5, 10, 50, 100, 500, 1000};
            var count = s.Length;
            var sum = 0;
            var j = 0;
            while(j < count - 1)
            {
                var b_val_index = symbol.IndexOf(s[j]);
                var b_val = value[b_val_index];
                var b_val_next_index = symbol.IndexOf(s[j + 1]);
                var b_val_next = value[b_val_next_index];
                if (b_val_next <= b_val)
                {
                    sum += b_val;
                    j += 1;
                }
                else
                {
                    sum += b_val_next - b_val;
                    j += 2;
                }
            }
            if (j >= count)
                return sum;
            else
                return sum + value[symbol.IndexOf(s[j])];
        }
    }
}
