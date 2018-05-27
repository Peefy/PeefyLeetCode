import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

public class TwoSum {
    public int[] twoSum(int[] nums, int target) {
        int[] result = new int[2];
        result[0] = 1;
        result[1] = 2;
        ArrayList<Integer> list = new ArrayList<Integer>(10);
        for (int num : nums) {
            list.add(num);
        }
        Collections.sort(list);
        int num = nums.length;
        for (int i = 0; i < num; ++i) {
            for (int j = i + 1; j < num; ++j) {
                if (nums[i] + nums[j] == target) {
                    result[0] = i;
                    result[1] = j;
                }
            }
        }
        return result;
    }
}
