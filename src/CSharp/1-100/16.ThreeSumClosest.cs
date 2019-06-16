
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ThreeSumClosest
{
public class Solution {
    public int ThreeSumClosest(int[] nums, int target) {
        Array.Sort(nums);
        int closestNum = 0;
        int diff = int.MaxValue;

        for(int i = 0; i < nums.Length - 2; i++){
            int left = i + 1, right = nums.Length - 1;
            while(left < right){
                int temp_sum = nums[i] + nums[left] + nums[right];
                int temp_diff = Math.Abs(temp_sum - target);
                if(temp_diff < diff){
                    diff = temp_diff;
                    closestNum = temp_sum;
                }

                if(temp_sum < target){
                    left ++;
                }else if(temp_sum > target){
                    right --;
                }else{
                    return temp_sum;
                }

            }
        }
        return closestNum;
    }
}
}
