import java.awt.List;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

import javax.lang.model.util.ElementScanner6;

class Solution {
    public int mySqrt(int x) {
        if (x == 0)
            return 0;
        if (x == 1)
            return 1;
        int left = 1;
        int right = x / 2;
        while (left < right) {
            int middle = left + ((right - left + 1) >> 1);
            if (middle == x / middle)
                return middle;
            else if (middle < x / middle)
                left = middle;
            else
                right = middle - 1;
        }
        return left;
    }
}
