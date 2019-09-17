
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.SummaryRanges
{
public class Solution {
    public IList<string> SummaryRanges(int[] nums) {
        List<string> summary = new List<string>();
        for (int i = 0, j = 0; j < nums.Length; ++j) {
            if (j + 1 < nums.Length && nums[j + 1] == nums[j] + 1)
                continue;
            if (i == j)
                summary.Add(nums[i] + "");
            else
                summary.Add(nums[i] + "->" + nums[j]);
            i = j + 1;
        }
        return summary;
    }
}
}