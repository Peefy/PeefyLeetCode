
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.HashSet;


class Solution {
    public String intToRoman(int num) {
        String res = "";
        int[] tokenkey = new int[]{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        String[] tokenval = new String[]{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for(int i = 0;i < 13;++i){
            int n = tokenkey[i];
            String t = tokenval[i];
            while (num >= n){
                res += t;
                num -= n;
            }
        }
        return res;
    }
}
