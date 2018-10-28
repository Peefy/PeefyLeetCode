
using System;
using System.Collections.Generic;

namespace PeefyLeetCode.IslandPerimeter
{

public class Solution {
    public int IslandPerimeter(int[,] grid) {
        int m = grid.GetLength(0);
        int n = grid.GetLength(1);
        int count = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0;j < n; j++){
                if (grid[i, j] == 1) {
                    count += 4;
                    if (i + 1 < m && grid[i + 1, j] == 1) {
                        count -= 2;
                    }
                    if (j + 1 < n && grid[i, j + 1] == 1) {
                        count -= 2;
                    }
                }
            }
        }
        return count;
    }
}

}
