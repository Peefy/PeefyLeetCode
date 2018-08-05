
import java.awt.List;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;

class Solution {
    public boolean isUgly(int num) {
        if (num <= 0) 
            return false;
        while (num % 2 == 0) 
            num /= 2;
        while (num % 3 == 0) 
            num /= 3;
        while (num % 5 == 0) 
            num /= 5;
        return num == 1;
    }
}
