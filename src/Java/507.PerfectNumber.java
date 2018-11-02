
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;

class Solution {
    public boolean checkPerfectNumber(int num) {
        if (num <= 1) {
            return false;
        }
        int up = (int)Math.sqrt(num) + 1;
        int sum = 1;
        for (int i = 2; i < up; i++) {
            if (num % i == 0) {
                sum += i;
                if (num / i != i) {
                    sum += num / i;
                }
            }
        }
        return sum == num;
    }
}

