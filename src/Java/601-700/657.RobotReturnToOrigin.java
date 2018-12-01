
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
    public boolean judgeCircle(String moves) {
        int lcount = 0;
        int rcount = 0;
        int ucount = 0;
        int dcount = 0;
        for (char c : moves.toCharArray()) {
            if (c == 'L')
                lcount++;
            else if (c == 'R')
                rcount++;
            else if (c == 'U')
                ucount++;
            else if (c == 'D'){
                dcount++;
            }       
        }
        return lcount == rcount && ucount == dcount;
    }
}

