
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
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int re = Integer.MAX_VALUE, len = nums.length;
        int left = 0, right = len - 1;
        int num1, now, min_abs = Integer.MAX_VALUE;
        for(int i = 0; i < len; ++i)
        {
            num1 = nums[i];
            for(left = i + 1, right = len - 1; left < right;)
            {
                now = num1 + nums[left] + nums[right];
                if(target == now)
                    return now;
                if(Math.abs(target - now) < min_abs)
                {
                    re = now;
                    min_abs = Math.abs(target - now);
                }
                if(now > target)
                    right--;
                else
                    left++;
            }
        }
        return re;
    }
}
