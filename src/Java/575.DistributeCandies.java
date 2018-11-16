
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
    public int distributeCandies(int[] candies) {
        HashSet<Integer> hash = new HashSet<>();
        for (int candie : candies) {
            hash.add(candie);
        }
        return Math.min(hash.size(), candies.length / 2);
    }
}