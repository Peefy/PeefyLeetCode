using System;

namespace PeefyLeetCode.IntReverseBits {
    public class Solution {
        public uint reverseBits (uint n) {
            char[] tmp = Convert.ToString (n, 2).ToCharArray ();
            Array.Reverse (tmp);
            return Convert.ToUInt32 (new string (tmp), 2) << (32 - tmp.Length);
        }
    }
}