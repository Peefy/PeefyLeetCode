using System;
using System.Linq;
using System.Collections;
using System.Collections.Generic;

namespace PalindroNumber
{
    class Solution
    {
        public bool IsPalindrome(int x) 
        {
            if(x < 0)
                return false;
            var bit = new List<int>();
            int pre = x;
            while(x > 0)
            {
                int cur = x % 10;
                bit.Add(cur);
                x = x / 10;
            }
            int sum = 0;
            foreach(var b in bit)
            {
                sum = sum * 10 + b; 
            }
            if(sum == pre)
            {
                return true;
            }
            return false;  
        }
    }
    
}