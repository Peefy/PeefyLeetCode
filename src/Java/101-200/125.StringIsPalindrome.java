
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;

class Solution {
    public boolean isPalindrome(String s) {
        if (s == null)
            return false;
        if (s == "")
            return true;
        s = s.replaceAll("[^0-9a-zA-Z]", "");
        s = s.toLowerCase();
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) != s.charAt(n - i - 1))
                return false;
        }
        return true;
    }
}
