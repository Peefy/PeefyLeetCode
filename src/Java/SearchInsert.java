import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class Solution {
    public int searchInsert(int[] nums, int target) {
        int n = nums.length;
        if (n == 0){
            return 0;
        }
        int i = 0;
        int j = n - 1;
        int mid = 0;
        while (i <= j) {
            mid = (j + i) / 2;
            if (nums[mid] < target)
                i = mid + 1;
            if (nums[mid] > target)
                j = mid - 1;
            if (target == nums[mid])
                return mid;
        }
        return i;
    }
}
