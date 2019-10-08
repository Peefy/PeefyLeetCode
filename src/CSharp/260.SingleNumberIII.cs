
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.SingleNumberIII
{
    public class Solution
    {
        public int[] SingleNumber(int[] nums)
        {
            int sign = 0;
            for (int i = 0; i < nums.Length; i++)
            {
                sign ^= nums[i];
            }
            sign &= -sign;
            int[] result = new int[2];
            for (int i = 0; i < nums.Length; i++)
            {
                if ((nums[i] & sign) == sign)
                    result[0] ^= nums[i];
                else
                    result[1] ^= nums[i]; ;
            }
            return result;
        }
    }
}