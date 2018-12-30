
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.PeakIndexInMountainArray
{
public class Solution {
    public int PeakIndexInMountainArray(int[] A) {
        int left = 0;
        int right = A.Length;
        while (left < right){
            int mid = (left + right) / 2;
            if (A[mid] < A[mid + 1])  
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
}
}

