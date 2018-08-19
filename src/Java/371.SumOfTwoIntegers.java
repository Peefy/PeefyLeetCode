
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

class Solution {
    public int getSum(int a, int b) {
                int carry = 0;
        while (b!=0){
            carry=a&b;
            a=a^b;
            b=carry<<1;
        }
        return a;
    }
}

