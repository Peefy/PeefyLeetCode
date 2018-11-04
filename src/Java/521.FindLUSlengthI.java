
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;

class Solution {
    public int findLUSlength(String a, String b) {
        return a == b ? -1 : Math.max(a.length(), b.length());
    }
}

