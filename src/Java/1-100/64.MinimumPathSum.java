
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
    public int minPathSum(int[][] grid) {
        int line = grid.length;
        int column = grid[0].length;
        for (int i = 1; i < column; i++){
            grid[0][i] += grid[0][i-1];
        }
        for (int i = 1; i < line; i++){
            grid[i][0] += grid[i-1][0];
        }
        for (int i = 1; i < line; i++){
            for (int j = 1; j < column; j++){
                grid[i][j] += Math.min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[line-1][column-1];
    }
}

