using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.MinPathSum
{
public class Solution {
    public int MinPathSum(int[][] grid) {
        int line = grid.Length;
        int column = grid[0].Length;
        for (int i = 1; i < column; i++){
            grid[0][i] += grid[0][i-1];
        }
        for (int i = 1; i < line; i++){
            grid[i][0] += grid[i-1][0];
        }
        for (int i = 1; i < line; i++){
            for (int j = 1; j < column; j++){
                grid[i][j] += Math.Min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[line-1][column-1];
    }
}
}