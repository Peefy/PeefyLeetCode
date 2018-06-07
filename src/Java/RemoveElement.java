
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Solution {
    public int removeElement(int[] nums, int val) {
        int count = 0;
        for (int i = 0; i < nums.length; ++i) {
            if (nums[i] != val) {
                nums[count++] = nums[i];
            }
        }
        return count;
    }
}
