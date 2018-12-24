
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.ProjectionArea
{
public class Solution {
    public int ProjectionArea(int[][] grid) {
        int area = 0;
        for (int i = 0; i < grid.Length; i++) {
            int xy = 0, yz = 0, xz = 0;
            for (int j = 0; j < grid[0].Length; j++) {
                xy += grid[i][j] == 0 ? 0 : 1;
                yz = Math.Max(yz, grid[i][j]);
                xz = Math.Max(xz, grid[j][i]);
            }
            area += (xy + yz + xz);
        }       
        return area;
    }
}
}

