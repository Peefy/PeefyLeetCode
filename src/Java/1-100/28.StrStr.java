import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

import com.sun.org.apache.regexp.internal.recompile;

class Solution {
    public int strStr(String haystack, String needle) {
        if (needle == null || needle.length() == 0)
            return 0;
        int n1 = haystack.length();
        int n2 = needle.length();
        int max = n1 - n2;
        int first = needle.charAt(0);
        for (int i = 0; i < n1; ++i) {
            if (haystack.charAt(i) != first) {
                while (++i <= max && haystack.charAt(i) != first)
                    ;
            }
            if (i <= max) {
                int j = i + 1;
                int end = j + n2 - 1;
                for (int k = 1; j < end && 
                    haystack.charAt(j) == needle.charAt(k); j++, k++)
                    ;
                if (j == end) {
                    return i;
                }
            }
        }
        return -1;
    }
}
