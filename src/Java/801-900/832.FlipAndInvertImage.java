
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
    public int[][] flipAndInvertImage(int[][] A) {
        for(int i = 0; i < A.length; i++){
            int size = A[0].length;
            for (int k = 0, mid=size>>1, j=size-1; k<mid; k++, j--){
                int temp = A[i][k];
                A[i][k] = A[i][j];
                A[i][j] = temp; 
            }
            for (int j = 0; j < size; j++){
                A[i][j] = 1 - A[i][j];
            }
        }
        return A;
    }
}
