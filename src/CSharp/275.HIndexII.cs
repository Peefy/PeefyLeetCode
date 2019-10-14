
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.HIndexII
{

public class Solution {
    public int HIndex(int[] citations) {
        int n = citations.Length;
        if (n == 0 || citations[n - 1] == 0)
            return 0;
        int left = 0;
        int right = n - 1;
        while (left < right) {
            int mid = (left + right) >> 1;
            if (citations[mid] < n - mid)
                left = mid + 1;
            else
                right = mid;
        }
        return n - left;
    }
}

}