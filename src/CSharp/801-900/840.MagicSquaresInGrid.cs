
using System;
using System.Linq;
using System.Collections.Generic;

namespace PeefyLeetCode.NumMagicSquaresInside
{
public class Solution {
    public int NumMagicSquaresInside(int[][] grid) {
        if (grid.Length < 3) { return 0; }
        int num = 0;
        for (int i = 0; i < grid.Length-2; ++i) {
            for (int j = 0; j < grid.Length-2; ++j) {
                if (isMagicSquares(grid, i, j, 3))
                    ++num;
            }
        }
        return num;
    }

    bool isMagicSquares(int[][] grid, int i, int j, int n) {
        if (grid.Length < i + n || grid.Length < j + n) 
            return false;    
        HashSet<int> hash = new HashSet<int>();
        int val = -1;
        int d1=0,d2=0;
        for (int k = 0; k < 3; ++k) {

            int row = 0, col = 0;
            for (int l = 0; l < 3; ++l) {
                if (grid[i+k][j+l] < 1 || grid[i+k][j+l] > 9)
                    return false;
                if (hash.Contains(grid[i+k][j+l]))
                    return false;
                hash.Add(grid[i+k][j+l]);
                row += grid[i+k][j+l];
                col += grid[i+l][j+k];

                if (k == l) d1 += grid[i+k][j+l];
                if (l+1+k == n) d2 += grid[i+k][j+l];
            }

            if (val< 0) val = row;
            if (row != val || col != val) return false;

        }

        if (val != d1 || val != d2) return false;
        return true;
    }
}
}

