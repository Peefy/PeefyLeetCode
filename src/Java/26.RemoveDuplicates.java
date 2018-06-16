
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class Solution {
    public int removeDuplicates(int[] nums) {
        int n = nums.length;
        int last = -222222222;
        int index = 0;
        for(int i = 0; i < n; ++i){
            if (nums[i]!= last){
                nums[index++] = nums[i];
            }
            last = nums[i];
        }
        return index;
    }
}
