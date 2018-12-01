
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
    public boolean validPalindrome(String s) {
        char[] sarr = s.toCharArray();
        int i = 0, j = sarr.length - 1;
        while (i < j) {
            if (sarr[i] != sarr[j]) {
                break;
            }
            i++;
            j--;
        }
        while (i < j) {
            if (sarr[i + 1] != sarr[j] && sarr[i] != sarr[j - 1]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}

