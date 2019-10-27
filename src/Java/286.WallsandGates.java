
import java.util.ArrayList;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

public class Solution {
    public void wallsAndGates(int[][] rooms) {
        if (rooms == null || rooms.length == 0 || rooms[0] == null || rooms[0].length == 0)
            return;
        int m = rooms.length;
        int n = rooms[0].length;

        boolean[][] visited = new boolean[m][n];

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (rooms[i][j] == Integer.MAX_VALUE) {
                    rooms[i][j] = search(rooms, visited, i, j, m, n);
                }
            }
        }
        return;
    }

    private int search(int[][] rooms, boolean[][] visited, int i, int j, int m, int n) {
        if (i < 0 || i > m - 1 || j < 0 || j > n - 1 || rooms[i][j] == -1)
            return Integer.MAX_VALUE;
        if (rooms[i][j] == 0)
            return 0;
        if (visited[i][j])
            return rooms[i][j];
        visited[i][j] = true;

        if (rooms[i][j] > 0 && rooms[i][j] < Integer.MAX_VALUE)
            return rooms[i][j];

        int up = search(rooms, visited, i - 1, j, m, n);
        int down = search(rooms, visited, i + 1, j, m, n);
        int left = search(rooms, visited, i, j - 1, m, n);
        int right = search(rooms, visited, i, j + 1, m, n);

        visited[i][j] = false;

        int min = Math.min(Math.min(up, down), Math.min(left, right));
        return min == Integer.MAX_VALUE ? min : min + 1;
    }
}
