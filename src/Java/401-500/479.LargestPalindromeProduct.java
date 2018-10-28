
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int largestPalindrome(int n) {
        if (n == 1) {
            return 9;
        }  
        if (n == 2) {
            return 987;
        }
        int upper = Math.pow(10, n) - 1, lower = upper / 10;
        for(int i = upper; i > lower; i--) {
            String t = String.valueOf(i);
            long p = Long.parseLong(t + new StringBuilder(str).reverse().toString());
            for(long j = upper; j * j > p; j--) {
                if(p % j == 0) {
                    return p % 1337;
                }
            }
        }
        return 9; 
    }
}