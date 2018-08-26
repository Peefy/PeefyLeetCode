

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
    String mod16(long x){
        Long ans = x % 16;
        if (ans == 10)
            return "a";
        else if (ans == 11)
            return "b";
        else if (ans == 12)
            return "c";
        else if (ans == 13)
            return "d";
        else if (ans == 14)
            return "e";
        else if (ans == 15)
            return "f";
        else
            return ans.toString();
    }

    public String toHex(int num) {
        long long_num = num; 
        String result = "";
        if (long_num == 0)
            return "0";
        if (long_num < 0)
            long_num += (long)Math.pow(2, 32);
        while (long_num > 0){
            result = mod16(long_num) + result;
            long_num /= 16;
        }
        return result;
    }
}

    