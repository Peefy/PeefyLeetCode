
import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Set;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int[] fairCandySwap(int[] A, int[] B) {
        HashSet<Integer> setB = new HashSet<>();
        int sumA = 0, sumB = 0;
        for (int a : A){
            sumA += a;
        }
        for (int b : B){
            sumB += b;
            setB.add(b);
        }
        int sub = (sumA - sumB) / 2;
        for (int a : A){
            if (setB.contains(a - sub) == true){
                return new int[] {a, a - sub};
            }
        }
        return new int[] {0, 0 - sub};
    }
}
