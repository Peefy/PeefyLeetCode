using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ContainsDuplicate {
    public class Solution {
        public bool ContainsDuplicate (int[] nums) {
            HashSet<int> s = new HashSet<int> ();
            var n = nums.Length;
            for (int i = 0; i < n; i++) {
                if (s.Contains (nums[i]) == true) {
                    return true;
                } else {
                    s.Add (nums[i]);
                }
            }
            return false;
        }
    }
}