
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
    public int numDecodings(String s) {
        int pp = 1;
        int p = (s.charAt(0) != '0') ? 1 : 0;
        for (int i = 1; i < s.length(); i++) {
            int twonumber = (s.charAt(i - 1) - '0') * 10 + s.charAt(i) - '0';
            int onenumber = s.charAt(i) - '0';
            int temp = p;
            p = pp * ((twonumber > 9 && twonumber <= 26) ? 1 : 0) + p * (onenumber > 0 ? 1 : 0);
            pp = temp;
        }
        return p;
    }
}
