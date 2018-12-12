
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
    public boolean isToeplitzMatrix(int[][] matrix) {
        int rows = matrix.length;
        int columns = matrix[0].length;
        int i = 0;  
        int j = 0;
        while (i + 1 < rows){
            while(j+1<columns){
                if (matrix[i][j] != matrix[i + 1][j + 1])
                    return false;
                j += 1;
            }
            j = 0;
            i += 1;
        }
        return true;
    }
}
