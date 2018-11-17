

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
    public boolean checkRecord(String s) {
        int Acount = 0;
        int Lcount = 0;
        for (char c : s.toCharArray()){
            Acount += c == 'A' ? 1 : 0;
            if (Acount >= 2)
                return false;
            Lcount = c == 'L' ? Lcount + 1 : 0; 
            if (Lcount >= 3)
                return false;
        }           
        return true;
    }
}
