
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

class Solution {
    public int findNthDigit(int n) {
        if (n < 10)
            return n;
        long sum = 0;
        int k = 0;
        for (int i = 0; i < 1000; i++) {
            sum += 9 * Math.pow(10, i) * (i + 1);       
            if (sum > n){
                sum -= 9 * Math.pow(10, i) * (i + 1);
                break;
            }
            ++k;
        }
        int after = (int)(n - sum);
        int num_index = (after - 1) / (k + 1);
        int num_bit = (after - 1) % (k + 1);
        int low = (int)Math.pow(10, k);
        int num = low + num_index;
        if (num_bit >= 0)
            return new Integer(num).toString().charAt(num_bit) - '0';
        else
            return new Integer(num).toString().charAt(k + num_bit) - '0';
    }
}

