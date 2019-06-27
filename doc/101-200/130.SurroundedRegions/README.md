
# problem 130 : SurroundedRegions

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/101-200/130.SurroundedRegions/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    void dfs(int i, int j, int m, int n, vector<vector<char>>& board){
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != 'O')
            return;
        board[i][j] = '#';
        dfs(i - 1, j, m, n, board);
        dfs(i + 1, j, m, n, board);
        dfs(i, j - 1, m, n, board);
        dfs(i, j + 1, m, n, board);
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        if (m == 0)
            return;
        int n = board[0].size();
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
};

```

## C# Solution

```csharp

public class Solution {
    public void dfs(int i, int j, int m, int n, char[][] board){
        if (i < 0 || j < 0 || i >= m || j >= n || board[i][j] != 'O')
            return;
        board[i][j] = '#';
        dfs(i - 1, j, m, n, board);
        dfs(i + 1, j, m, n, board);
        dfs(i, j - 1, m, n, board);
        dfs(i, j + 1, m, n, board);
    }
    public void Solve(char[][] board) {
        if (board == null)
            return;
        int m = board.Length;
        if (m == 0)
            return;
        int n = board[0].Length;
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

```

## Java Solution

```java

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

```

## Python Solution

```python

class Solution:
    def solve(self, board):
        """
        Do not return anything, modify board in-place instead.
        """
        if not board: 
            return
        row = len(board)
        col = len(board[0])
        if row < 3 or col < 3: 
            return
        def dfs(i, j):
            if i < 0 or j < 0 or i >= row or j >= col or board[i][j] != 'O':
                return
            board[i][j] = '#'
            dfs(i - 1, j)
            dfs(i + 1, j)
            dfs(i, j - 1)
            dfs(i, j + 1)
        for i in range(row):
            dfs(i, 0)
            dfs(i, col - 1)  
        for i in range(col):
            dfs(0, i)
            dfs(row - 1, i)
        for i in range(0, row):
            for j in range(0, col):
                if board[i][j] == 'O':
                    board[i][j] = 'X'
                if board[i][j] == '#':
                    board[i][j] = 'O'
        

```


