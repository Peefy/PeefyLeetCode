
import java.util.List;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Queue;
import java.util.HashSet;
import java.util.LinkedList;

class Solution {
    public void dfs(int i, int j, int m, int n, char[][] board){
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != 'O')
            return;
        board[i][j] = '#';
        dfs(i - 1, j, m, n, board);
        dfs(i + 1, j, m, n, board);
        dfs(i, j - 1, m, n, board);
        dfs(i, j + 1, m, n, board);
    }

    public void solve(char[][] board) {
        if (board == null)
            return;
        int m = board.length;
        if (m == 0)
            return;
        int n = board[0].length;
        if (m < 3 || n < 3) 
            return;
        for (int i = 0; i < m; i++) {
            dfs(i, 0, m, n, board);
            dfs(i, n - 1, m, n, board);
        }
        for (int j = 0; j < n; j++) {
            dfs(0, j, m, n, board);
            dfs(m - 1, j, m, n, board);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                if (board[i][j] == '#')
                    board[i][j] = 'O';
            }
        }
    }
}
