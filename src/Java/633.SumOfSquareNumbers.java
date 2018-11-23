
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
    public boolean judgeSquareSum(int c) {
        int i = 2;
        while (i * i <= c){
            int count = 0;
            if (c % i ==0)
                while (c%i ==0){
                    count += 1;
                    c /= i;
                }
                if (i % 4 == 3 && count % 2 != 0)
                    return false;
            i += 1;
        }
        return c % 4 != 3;
    }
}

