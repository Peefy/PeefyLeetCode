
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;


class Solution {
    public int rangeBitwiseAnd(int m, int n) {
        int count = 0; 
        while (m != n){
            m >>= 1;
            n >>= 1;
            count++;
        }
        return n << count;
    }
}
