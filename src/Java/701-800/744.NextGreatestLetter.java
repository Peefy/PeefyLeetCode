
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
    public char nextGreatestLetter(char[] letters, char target) {
        int n = letters.length;
        if (target >= letters[n - 1]) {
            return letters[0];
        }
        int l = 0;
        int r = n - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (letters[mid] > target)
                r = mid - 1;
            else if(letters[mid] < target)
                l = mid + 1;
            else{
                while (letters[mid] == target)
                    mid += 1;
                return letters[mid];
            }
        }
        return letters[l];
    }
}
