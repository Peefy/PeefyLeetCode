
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.FindShortestSubArray
{
public class Solution {
    
    public class Statistics {
        public int Count { get; set; }

        public int StartIndex { get; set; }

        public int EndIndex { get; set; }
    }
    
    public int FindShortestSubArray(int[] nums) {
        var dic = new Dictionary<int, Statistics>();

        for(int i = 0; i < nums.Length; i++) {
            if(dic.ContainsKey(nums[i])) {
                dic[nums[i]].Count++;
                dic[nums[i]].EndIndex = i;
            } else {
                dic.Add(nums[i], new Statistics {
                    Count = 1,
                    StartIndex = i,
                    EndIndex = i
                });
            }
        }

        var order = dic.OrderByDescending(n => n.Value.Count).ToList();

        int maxCount = order[0].Value.Count;

        int minLength = int.MaxValue;

        order.Where(n => n.Value.Count == maxCount)
             .ToList()
             .ForEach(n => minLength = Math.Min(minLength, n.Value.EndIndex - n.Value.StartIndex + 1));

        return minLength;
    }
}
}

