
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.HashSet;


class Solution {
    public static String reverse(String str){  
        return new StringBuilder(str).reverse().toString();  
    }

    public String longestPalindrome(String s) {
        int length = s.length();
        int max_len = 0;
        int begin = 0;
        for (int i = 0; i < length; i++) {
            if (i - max_len >= 1 && s.substring(i - max_len - 1, i + 1).equals(reverse(s.substring(i - max_len - 1, i + 1)))){
                begin = i - max_len - 1;
                max_len += 2;
                continue;
            }
            if (i - max_len >= 0 && s.substring(i - max_len, i + 1).equals(reverse(s.substring(i - max_len, i + 1)))){
                begin = i - max_len;
                max_len += 1;
            }
        }
        return s.substring(begin, begin + max_len);
    }
}
