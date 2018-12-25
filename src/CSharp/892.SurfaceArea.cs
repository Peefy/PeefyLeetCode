
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.SurfaceArea
{
public class Solution {
    public int SurfaceArea(int[][] grid) {
        int result = 0;
        for(int i = 0; i < grid.Length; i++){
            for(int j = 0; j < grid[i].Length; j++){
                if (grid[i][j] != 0)
                    result += grid[i][j] * 4 + 2;
                if (i > 0)
                    result -= Math.Min(grid[i][j], grid[i - 1][j]) * 2;
                if (j > 0)
                    result -= Math.Min(grid[i][j], grid[i][j - 1]) * 2;
            }     
        }
        return result;
    }
}
}

