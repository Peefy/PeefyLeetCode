
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;

class Solution {
    public int singleNumber(int[] nums) {
        int result = 0;
        for(int i = 0;i < nums.length;++i){
            result ^= nums[i];
        }
        return result;
    }
}
