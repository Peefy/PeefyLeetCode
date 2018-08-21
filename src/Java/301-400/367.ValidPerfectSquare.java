
import java.awt.List;
import java.lang.annotation.Retention;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Queue;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.LinkedList;

class Solution {
    public boolean isPerfectSquare(int num) {
        if (num > 2147395600)
        return false;
        if (num == 2147395600)
            return true;
        float x = 1;
        while (Math.abs(x * x - num) > 0.0001)
            x = x - (x * x - num) / (2 * x);
        return Math.abs((int)(x) - x) < 0.0001;
    }
}


