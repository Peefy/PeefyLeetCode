
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
    public int numMagicSquaresInside(int[][] grid) {
        if (grid.length < 3) { return 0; }
        int num = 0;
        for (int i = 0; i < grid.length-2; ++i) {
            for (int j = 0; j < grid.length-2; ++j) {
                if (isMagicSquares(grid, i, j, 3))
                    ++num;
            }
        }
        return num;
    }

    boolean isMagicSquares(int[][] grid, int i, int j, int n) {
        if (grid.length < i + n || grid.length < j + n) 
            return false;    
        HashSet<Integer> hash = new HashSet<>();
        int val = -1;
        int d1=0,d2=0;
        for (int k = 0; k < 3; ++k) {

            int row = 0, col = 0;
            for (int l = 0; l < 3; ++l) {
                if (grid[i+k][j+l] < 1 || grid[i+k][j+l] > 9)
                    return false;
                hash.add(grid[i+k][j+l]);
                row += grid[i+k][j+l];
                col += grid[i+l][j+k];

                if (k == l) d1 += grid[i+k][j+l];
                if (l+1+k == n) d2 += grid[i+k][j+l];
            }

            if (val< 0) val = row;
            if (row != val || col != val) return false;

        }

        if (val != d1 || val != d2) return false;
        return hash.size() == 9;
    }
}
