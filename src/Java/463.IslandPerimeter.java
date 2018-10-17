

import java.awt.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.HashSet;

class Solution {
    public int islandPerimeter(int[][] grid) {
        int m = grid.length;
        int n = grid[0].length;
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0;j < n; j++){
                if (grid[i][j] == 1) {
                    count += 4;
                    if (i + 1 < m && grid[i + 1][j] == 1) {
                        count -= 2;
                    }
                    if (j + 1 < n && grid[i][j + 1] == 1) {
                        count -= 2;
                    }
                }
            }
        }
        return count;
    }
}
