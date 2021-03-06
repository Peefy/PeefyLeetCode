
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

    public boolean dfs(char[][] board, char[] word, Integer current, int i, int j){
        char tmp = board[i][j];
        board[i][j] = 0;
        current += 1;
        if (current == word.length)
            return true; 
        if (i > 0 && board[i-1][j] == word[current])
            if (dfs(board, word, current, i - 1, j))
                return true;
        if (j > 0 && board[i][j-1] == word[current])
            if (dfs(board, word, current, i, j - 1))
                return true;
        if (i < board.length - 1 && board[i+1][j] == word[current])
            if (dfs(board, word, current, i+1, j))
                return true;
        if (j < board[0].length - 1 && board[i][j+1] == word[current])
            if (dfs(board, word, current, i, j+1))
                return true;  
        board[i][j] = tmp;
        return false;
    }

    public boolean exist(char[][] board, String word) {
        if (board.length == 0)
            return false;
        int m = board.length;
        int n = board[0].length;
        HashMap<Character, Integer> need = new HashMap<>();
        char[] wordarr = word.toCharArray();
        for (char c : wordarr) {
            if (need.containsKey(c) == false)
                need.put(c, 1);
            else
                need.replace(c, need.getOrDefault(c, 0) + 1);
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (need.containsKey(board[i][j]) == true)
                need.replace(board[i][j], need.getOrDefault(board[i][j], 0) - 1);
            }
        }
        for (char c : need.keySet()) {
            if (need.get(c) > 0)
                return false;
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (board[i][j] == wordarr[0]) {
                    int current = 0;
                    if (dfs(board, wordarr, current, i, j) == true)
                        return true;
                }
            }
        }
        return false;
    }
}