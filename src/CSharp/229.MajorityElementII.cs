
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.MajorityElementII
{
public class Solution {
    public IList<int> MajorityElement(int[] nums) {
        int major1 = 0;
        int cnt1 = 0;
        int major2 = 0;
        int cnt2 = 0;
        int n = nums.Length;
        for (int i = 0; i < n; i++){
            if (cnt1 == 0 && major2 != nums[i]){
                major1 = nums[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0 && major1 != nums[i]){
                major2 = nums[i];
                cnt2 = 1;
            }
            else if (major1 == nums[i])
                cnt1 += 1;
            else if (major2 == nums[i])
                cnt2 += 1;
            else{
                cnt1 -= 1;
                cnt2 -= 1;
            }
        }           
        cnt1 = 0;
        cnt2 = 0;
        for (int i = 0; i < n; i++){
            if (nums[i] == major1)
                cnt1 += 1;
            else if (nums[i] == major2)
                cnt2 += 1;
        }
        List<int> ans = new List<int>();
        if (cnt1 > n / 3)
            ans.Add(major1);
        if (cnt2 > n / 3)
            ans.Add(major2);
        return ans;
    }
}
}