
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;

namespace PeefyLeetCode.WiggleSort
{

public class Solution {
    public void WiggleSort(int[] nums) {
        for (int i = 1; i < nums.Length; ++i) {
            if ((i % 2 == 0 && nums[i - 1] < nums[i]) || 
                (i % 2 == 1 && nums[i - 1] > nums[i])) {
                var temp = nums[i - 1];
                nums[i - 1] = temp;
                nums[i] = nums[i - 1];
            }       
        }
    }
}

}