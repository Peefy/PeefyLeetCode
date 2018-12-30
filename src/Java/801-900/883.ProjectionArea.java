
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
    public int projectionArea(int[][] grid) {
        int area = 0;
        for (int i = 0; i < grid.length; i++) {
            int xy = 0, yz = 0, xz = 0;
            for (int j = 0; j < grid[0].length; j++) {
                xy += grid[i][j] == 0 ? 0 : 1;
                yz = Math.max(yz, grid[i][j]);
                xz = Math.max(xz, grid[j][i]);
            }
            area += (xy + yz + xz);
        }       
        return area;
    }
}