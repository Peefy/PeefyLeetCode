
using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;


namespace PeefyLeetCode.WallsandGates
{

public class Solution {
    public void WallsAndGates(int[][] rooms) {
        if (rooms == null || rooms.Length == 0 || rooms[0] == null || rooms[0].Length == 0)
            return;
        int m = rooms.Length;
        int n = rooms[0].Length;

        var visited = new bool[m, n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rooms[i][j] == int.MaxValue) {
                    rooms[i][j] = Search(rooms, visited, i, j, m, n);
                }
            }
        }
        return;
    }

    private int Search(int[][] rooms, bool[,] visited, int i, int j, int m, int n) {
        if (i < 0 || i > m - 1 || j < 0 || j > n - 1 || rooms[i][j] == -1)
            return int.MaxValue;
        if (rooms[i][j] == 0)
            return 0;
        if (visited[i, j])
            return rooms[i][j];
        visited[i, j] = true;

        if (rooms[i][j] > 0 && rooms[i][j] < int.MaxValue)
            return rooms[i][j];

        int up = Search(rooms, visited, i - 1, j, m, n);
        int down = Search(rooms, visited, i + 1, j, m, n);
        int left = Search(rooms, visited, i, j - 1, m, n);
        int right = Search(rooms, visited, i, j + 1, m, n);

        visited[i, j] = false;

        int min = Math.Min(Math.Min(up, down), Math.Min(left, right));
        return min == int.MaxValue ? min : min + 1;
    }
}

}