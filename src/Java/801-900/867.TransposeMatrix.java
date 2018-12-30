
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
    public int[][] transpose(int[][] A) {
        int[][] result = new int[A[0].length][A.length];
        for (int j = 0; j < A[0].length; j++) {
            for (int i = 0; i < A.length; i++) {
                result[j][i] = A[i][j];
            }
        }
        return result;
    }
}
