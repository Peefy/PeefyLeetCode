
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.HeatersFindRadius
{

public class Solution {
    public int FindRadius(int[] houses, int[] heaters) {
        Array.Sort(houses);
        Array.Sort(heaters);
        int n = heaters.Length;
        int i = 0, length = 0;
        foreach (var house in houses) {
            while ((i >= n - 1 ? int.MaxValue : Math.Abs(heaters[i + 1] - house)) <= Math.Abs(heaters[i] - house)) {
                i++;
            }
            length = Math.Max(length, Math.Abs((i >= n ? int.MaxValue : heaters[i]) - house));
        }
        return length;
    }
}

}
