
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public List<Integer> selfDividingNumbers(int left, int right) {
        ArrayList<Integer> res = new ArrayList<>();
        for (int i = left; i <= right; i++) {
            int j = i;
            while (j > 0){
                int d = j % 10;
                if (d == 0) {
                    break;
                }
                if (i % d != 0){
                    break;
                }
                j /= 10;
            }
            if (j == 0)
                res.add(i);
        }
        return res;
    }
}
