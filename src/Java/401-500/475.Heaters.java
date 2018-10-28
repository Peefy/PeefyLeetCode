
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int findRadius(int[] houses, int[] heaters) {
        Arrays.sort(houses);
        Arrays.sort(heaters);
        int n = heaters.length;
        int i = 0, length = 0;
        for (int house : houses) {
            while ((i >= n - 1 ? Integer.MAX_VALUE : Math.abs(heaters[i + 1] - house)) <= Math.abs(heaters[i] - house)) {
                i++;
            }
            length = Math.max(length, Math.abs((i >= n ? Integer.MAX_VALUE : heaters[i]) - house));
        }
        return length;
    }
}
    
