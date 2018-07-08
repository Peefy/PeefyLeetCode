
import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

class Solution {
    public String convertToTitle(int n) {
        String r = "";
        while (n != 0) {
            --n;
            r = (char)((n % 26) + 'A') + r;
            n /= 26;
        }
        return r;
    }
}


