import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class Solution {
    public int maxSubArray(int[] nums) {
        double globalMax = nums[0];
        double localMax = 0;
        for(int i = 0 ; i < nums.length; i++)
        {
            localMax = Math.max(nums[i],localMax+nums[i]);
            globalMax = Math.max(globalMax,localMax);
        }
        return (int)globalMax;
    }
}
