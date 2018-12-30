
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
    public int surfaceArea(int[][] grid) {
        int result = 0;
        for(int i = 0; i < grid.length; i++){
            for(int j = 0; j < grid[i].length; j++){
                if (grid[i][j] != 0)
                    result += grid[i][j] * 4 + 2;
                if (i > 0)
                    result -= Math.min(grid[i][j], grid[i - 1][j]) * 2;
                if (j > 0)
                    result -= Math.min(grid[i][j], grid[i][j - 1]) * 2;
            }     
        }
        return result;
    }
}
