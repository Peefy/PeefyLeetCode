
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;

class Solution {
    public boolean detectCapitalUse(String word) {
        char[] list = word.toCharArray();
        int n = list.length;
        if (n <= 1) {
            return true;
        }
        char first = list[0];
        char second = list[1];
        int mode = 0;
        if (first >= 'a' && first <= 'z')
            mode = 2;
        else
            mode = (second >= 'A' && second <= 'Z') ? 1 : 3;
        for (int i = 1; i < n; i++) {
            if (mode == 1 && (list[i] >= 'a' && list[i] <= 'z'))
                return false;
            if (mode == 2 && (list[i] >= 'A' && list[i] <= 'Z'))
                return false;
            if (mode == 3 && (list[i] >= 'A' && list[i] <= 'Z'))
                return false;
        }
        return true; 
    }
}

