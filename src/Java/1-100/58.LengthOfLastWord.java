import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Solution {
    public int lengthOfLastWord(String s) {
        char[] arr = s.toCharArray();
        int n = arr.length;
        if (n == 0)
            return 0;
        int i = n - 1;
        int length = 0;
        while (i >= 0 && arr[i] == ' ') {
            --i;
        }
        while (i >= 0) {
            if (arr[i] != ' ')
                ++length;
            else
                break;
            --i;
        }
        return length;
    }
}
