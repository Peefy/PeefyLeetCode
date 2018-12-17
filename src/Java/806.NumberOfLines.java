
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
    public int[] numberOfLines(int[] widths, String S) {
        int[] result = new int[2];
        char[] charArr = S.toCharArray();
        int sum = 0;
        int line = 1;
        for (char c : charArr) {
            sum = sum + widths[c - 97];
            if (sum > 100) {
                line++;
                sum = widths[c - 97];
            }

        }
        result[0] = line;
        result[1] = sum;
        return result;
    }
}
