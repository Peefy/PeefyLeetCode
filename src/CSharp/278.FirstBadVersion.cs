using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FirstBadVersion
{

    public class VersionControl
    {
        public bool IsBadVersion(int version){
            return true;
        }
    }
public class Solution : VersionControl {
    public int FirstBadVersion(int n) {
                int left = 1;
        int right = n;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (IsBadVersion(middle) == true) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return left;
    }
}
}