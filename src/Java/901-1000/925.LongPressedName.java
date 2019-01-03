
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;

class Solution {
    public boolean isLongPressedName(String name, String typed) {
        int i = 0;
        for(int j = 0; j < typed.length(); j++){
            if (i < name.length() && name.charAt(i) == typed.charAt(j))
                i += 1;
            else if (j == 0 || typed.charAt(j) != typed.charAt(j - 1))
                return false;
        }
        return i == name.length();
    }
}
