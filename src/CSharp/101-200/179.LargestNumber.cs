
using System;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.LargestNumber
{
    public class LargerNumberComparator : IComparer<string> {
        public int Compare(string x, string y)
        {
            string order1 = x + y;
            string order2 = y + x;
            return order2.CompareTo(order1);
        }

        public override bool Equals(object obj)
        {
            return base.Equals(obj);
        }

        public override int GetHashCode()
        {
            return base.GetHashCode();
        }

        public override string ToString()
        {
            return base.ToString();
        }
    }

public class Solution {
    public string LargestNumber(int[] nums) {
        // Get input integers as strings.
        String[] asStrs = new String[nums.Length];
        for (int i = 0; i < nums.Length; i++) {
            asStrs[i] = nums[i].ToString();
        }

        // Sort strings according to custom comparator.
        Array.Sort(asStrs, new LargerNumberComparator());

        // If, after being sorted, the largest number is `0`, the entire number
        // is zero.
        if (asStrs[0].Equals("0")) {
            return "0";
        }

        // Build largest number from sorted array.
        StringBuilder largestNumberStr = new StringBuilder();
        foreach (var numAsStr in asStrs) {
            largestNumberStr.Append(numAsStr);
        }

        return largestNumberStr.ToString();
    }
}

}



