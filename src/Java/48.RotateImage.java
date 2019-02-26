
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Solution {
    public void rotate(int[][] matrix) {
        int rows = matrix.length;
        int columns = matrix[0].length;
        int temp = 0;
        
        //  Transpose
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j != i; j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        //  Swap Columns
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < columns/2 ; j++) {
                temp = matrix[i][j];
                matrix[i][j] = matrix[i][columns-1-j];
                matrix[i][columns-1-j] = temp;
            }
        }
    }
}
