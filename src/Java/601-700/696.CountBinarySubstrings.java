
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
    public int countBinarySubstrings(String s) {
        int res = 0, preLen = 0, curLen = 1;
        for (int i = 1; i < s.length(); i++){
            if (s.charAt(i) == s.charAt(i - 1))
                curLen += 1;
            else{
                preLen = curLen;
                curLen = 1;
            }
            if (preLen >= curLen)
                res += 1;
        }
        return res;
    }
}
