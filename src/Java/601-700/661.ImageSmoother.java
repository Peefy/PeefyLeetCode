
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
    public int[][] imageSmoother(int[][] M) {
        int m = M.length;
        int n = M[0].length;
        int[][] N = new int[m][n];
        for (int i = 0;i < m;++i)
            for (int j = 0;j < n;++j){
                int count = 1;
                N[i][j] = M[i][j];
                if (i - 1 >= 0 && j - 1 >= 0){
                    N[i][j] += M[i - 1][j - 1]; count += 1;
                }  
                if (i - 1 >= 0 && j + 1 < n){
                    N[i][j] += M[i - 1][j + 1]; count += 1;
                }       
                if (j - 1 >= 0){
                    N[i][j] += M[i][j - 1]; count += 1;
                }
                if (j + 1 < n){
                    N[i][j] += M[i][j + 1]; count += 1;
                }    
                if (i + 1 < m && j + 1 < n){
                    N[i][j] += M[i + 1][j + 1]; count += 1;
                }
                if (i + 1 < m && j - 1 >= 0){
                    N[i][j] += M[i + 1][j - 1]; count += 1;
                }
                if (i + 1 < m){
                    N[i][j] += M[i + 1][j]; count += 1;
                }
                if (i - 1 >= 0){
                    N[i][j] += M[i - 1][j]; count += 1;
                }
                N[i][j] /= count;
            }
        return N;
    }
}

