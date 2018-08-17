
import java.awt.List;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;

class NumArray {

    int[] arr;
    public NumArray(int[] nums) {
        int n = nums.length;
        if (n == 0) {
            return;
        }
        arr = new int[n];
        arr[0] = nums[0];
        for (int i = 1; i < n; i++) {
            arr[i] = arr[i - 1] + nums[i];
        }
    }
    
    public int sumRange(int i, int j) {
        if (i == 0) {
            return arr[j];
        } else {
            return arr[j] - arr[i - 1];
        }
    }
}
