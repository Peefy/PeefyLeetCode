using System;
using System.Collections.Generic;

namespace PeefyLeetCode.FindDisappearedNumbers
{

public class Solution {
    public IList<int> FindDisappearedNumbers(int[] nums) {
        var res = new List<int>();
        for (int i = 0; i < nums.Length; ++i) {
            while (nums[i] != (i+1) && nums[i] != nums[nums[i] - 1])
		    {
		        //	swap(nums[i], nums[nums[i] - 1]);
                int tmp = nums[i];
			    nums[i] = nums[nums[i] - 1];
			    nums[tmp - 1] = tmp;
		    }
        }
        for (int i = 0; i < nums.Length; ++i) {
            if (nums[i] != i + 1) {
                res.Add(i + 1);
            }
        }
        return res;
    }
}

}