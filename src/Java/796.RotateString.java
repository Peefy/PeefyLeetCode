

import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;

class Solution {
    public boolean rotateString(String A, String B) {
        if (A.length() != B.length())
            return false;
        return (A + A).contains(B);
    }
}

