
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
    public int numJewelsInStones(String J, String S) {
        int count = 0;
        int jLen = J.length();
        int sLen = S.length();
        int a = 0, b = 0;
        for(; b < sLen; b++) {
            a = 0;
            for(; a < jLen; a++) {
                if(J.charAt(a) == S.charAt(b)) {
                    count ++;
                    break;//J中的元素不重复
                }
            }
        }
        return count;
    }
}
