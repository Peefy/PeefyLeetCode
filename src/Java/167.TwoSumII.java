
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

public class Solution {
    public int[] twoSum(int[] numbers, int target) {
        HashMap<Integer, Integer> hash = new HashMap<>();
        int[] r = new int[2];
        for (int i = 0; i < numbers.length; i++) {
            int sub = target - numbers[i];
            if(hash.containsKey(sub) == true)
            {
                r[0] = hash.get(sub) + 1;
                r[1] = i + 1;
                return r;
            }
            else
            {
                hash.put(numbers[i], i);
            }
        }
        return r;
    }
}


