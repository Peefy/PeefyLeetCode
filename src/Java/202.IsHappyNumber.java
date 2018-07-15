
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

class Solution {
    public int getNext(int num){
        int num_r = 0;
        while (num > 0) {
            int c = num % 10;
            num = num / 10;
            num_r += c * c;
        }
        return num_r;
    }

    public boolean isHappy(int n) {
        HashMap<Integer, Integer> d = new HashMap<>();
        int happy = n;
        Integer count = 0;
        while (happy != 1) {
            if (d.containsValue(happy) == true)
                return false;
            d.put(count, happy);
            happy = getNext(happy);
            count += 1;
        }
        return true;
    }
}




