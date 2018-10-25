
import java.awt.List;
import java.util.LinkedList;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int[] constructRectangle(int area) {
        int sqrt = (int)Math.sqrt(area) + 1;
        for (int i = 0; i < sqrt; i++) {
            int j = sqrt - i - 1;
            if (area % j == 0){
                return new int[]{area / j, j};
            }
        }
        return new int[]{area, 1};
    }
}