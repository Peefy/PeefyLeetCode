
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;


class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        List<List<Integer>> res = new LinkedList<>();
        int n = nums.length;
        if(n < 4) return res;
        Arrays.sort(nums);
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
                        LinkedList<Integer> tmp = new LinkedList<>();
                        tmp.add(nums[i]);
                        tmp.add(nums[j]);
                        tmp.add(nums[left]);
                        tmp.add(nums[right]);
                        res.add(tmp);
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
