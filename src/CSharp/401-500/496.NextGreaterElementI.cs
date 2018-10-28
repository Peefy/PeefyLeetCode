
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.NextGreaterElement
{
public class Solution {
    public int[] NextGreaterElement(int[] findNums, int[] nums) {
        int m = findNums.Length;
        int n = nums.Length;
        int[] r = new int[m];
        Dictionary<int, int> store = new Dictionary<int, int>();
        Stack<int> s = new Stack<int>();
        foreach (int max in nums) {
            while (s.Count > 0 && s.Peek() < max) {
                store.Add(s.Pop(), max);
            }
            s.Push(max);
        }
        for (int i = 0; i < m; i++) {
            r[i] = store.GetValueOrDefault(findNums[i], -1);
        }
        return r;
    }
}

}
