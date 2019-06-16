
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.ThreeSum
{
public class Solution {
    public IList<IList<int>> FourSum(int[] nums, int target) {
        List<IList<int>> res = new List<IList<int>>();
        int n = nums.Length;
        if(n < 4) return res;
        Array.Sort(nums);
        for(int i = 0; i < n - 3; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }
            if(nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target)
            {
                break;
            }
            if(nums[i] + nums[n - 1] + nums[n - 2] + nums[n - 3] < target)
            {
                continue;
            }
            for(int j = i + 1; j < n - 2; j++)
            {
                if(j > i + 1 && nums[j] == nums[j - 1])
                {
                    continue;
                }
                if(nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target)
                {
                    break;
                }
                if(nums[i] + nums[j] + nums[n - 2] + nums[n - 1] < target)
                {
                    continue;
                }
                int left = j + 1;
                int right = n - 1;
                while(left < right)
                {
                    if(nums[i] + nums[j] + nums[left] + nums[right] < target)
                    {
                        left++;
                    }
                    else if(nums[i] + nums[j] + nums[left] + nums[right] > target)
                    {
                        right--;
                    }
                    else{
                        res.Add(new List<int>{nums[i], nums[j], nums[left], nums[right]});
                        do{
                            left++;
                        }while(left < right && nums[left] == nums[left-1]);
                        do{
                            right--;
                        }while(left < right && nums[right] == nums[right + 1]);
                    }
                }
            }
        }
        return res;
    }
}
}
