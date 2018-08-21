using System;
using System.Collections.Generic;

namespace PeefyLeetCode.IntersectionOfTwoArraysII
{
public class Solution {
    public int[] Intersect(int[] nums1, int[] nums2) {
        Array.Sort(nums1);
        Array.Sort(nums2);
        int i = 0;
        int j = 0;
        var r = new List<int>();
        while (i < nums1.Length && j < nums2.Length)
        {
            if (nums1[i] == nums2[j]){
                r.Add(nums1[i]);
                i += 1;
                j += 1;
            }
            else if (nums1[i] < nums2[j])
                i += 1;
            else if (nums1[i] > nums2[j])
                j += 1;
        }
        return r.ToArray();
    }
}
}