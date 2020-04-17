
# problem 289 : GameOfLife

<img src="https://github.com/Peefy/PeefyLeetCode/blob/master/doc/201-300/289.GameOfLife/problem.png"/>

## C++ Solution

```c++

class Solution {
public:
    void gameOfLife(vector<vector<int> >& board) {
        int n = board.size();
        int m = board[0].size();
        int DX[] = {0, 0, 1, -1, 1, 1, -1, -1};
        int DY[] = {1, -1, 0, 0, 1, -1, 1, -1};
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < m; j++) {
                int cnt = 0;
                for (size_t k = 0; k < 8; k++){
                    int x = i + DX[k];
                    int y = j + DY[k];
                    if (x < 0 || x >= n || y < 0 || y >= m)
                        continue;
                    cnt += board[x][y] & 1;
                }
                if ((board[i][j] & 1) > 0){
                    if (cnt >= 2 && cnt <= 3)
                        board[i][j] = 0b11;
                }
                else if (cnt == 3)
                    board[i][j] = 0b10;
            } 
        }
        for (size_t i = 0; i < n; i++) {
            for (size_t j = 0; j < m; j++) {
                board[i][j] >>= 1;
            } 
        }
    }
};

```

## C# Solution

```csharp

public class Solution {
    private static int[] DX = {0, 0, 1, -1, 1, 1, -1, -1};
    private static int[] DY = {1, -1, 0, 0, 1, -1, 1, -1};

    public void GameOfLife(int[][] board) {
        if (board.Length == 0) {
            return;
        }
        int n = board.Length;
        int m = board[0].Length;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int cnt = 0;
                for (int k = 0; k < 8; k++) {
                    int x = i + DX[k];
                    int y = j + DY[k];
                    if (x < 0 || x >= board.Length || y < 0 || y >= board[0].Length) {
                        continue;
                    }
                    // 这里不能直接加board[x][y]，因为 board[x][y] 的倒数第二位是可能有值的。
                    cnt += board[x][y] & 1;
                }
                if ((board[i][j] & 1) > 0) {
                    // 这个是活细胞
                    if (cnt >= 2 && cnt <= 3) {
                        // 周围有2/3个活细胞，下一个状态还是活细胞。
                        board[i][j] = 0b11;
                    }
                    // 周围活细胞过多或过少都会死，因为原数据是0b01，所以这里不用额外赋值。
                } else if (cnt == 3) {
                    // 这个是死细胞，周围有3个活细胞，下一个状态变为活细胞。
                    board[i][j] = 0b10;
                }
            }
        }
        // 最后一位去掉，倒数第二位变为更新后的状态。
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                board[i][j] >>= 1;
            }
        }
    }
}

```

## Java Solution

```java

public class Solution {
    private static final int[] DX = {0, 0, 1, -1, 1, 1, -1, -1};
    private static final int[] DY = {1, -1, 0, 0, 1, -1, 1, -1};

    public void gameOfLife(int[][] board) {
        if (board.length == 0) {
            return;
        }
        int n = board.length;
        int m = board[0].length;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int cnt = 0;
                for (int k = 0; k < 8; k++) {
                    int x = i + DX[k];
                    int y = j + DY[k];
                    if (x < 0 || x >= board.length || y < 0 || y >= board[0].length) {
                        continue;
                    }
                    // 这里不能直接加board[x][y]，因为 board[x][y] 的倒数第二位是可能有值的。
                    cnt += board[x][y] & 1;
                }
                if ((board[i][j] & 1) > 0) {
                    // 这个是活细胞
                    if (cnt >= 2 && cnt <= 3) {
                        // 周围有2/3个活细胞，下一个状态还是活细胞。
                        board[i][j] = 0b11;
                    }
                    // 周围活细胞过多或过少都会死，因为原数据是0b01，所以这里不用额外赋值。
                } else if (cnt == 3) {
                    // 这个是死细胞，周围有3个活细胞，下一个状态变为活细胞。
                    board[i][j] = 0b10;
                }
            }
        }
        // 最后一位去掉，倒数第二位变为更新后的状态。
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                board[i][j] >>= 1;
            }
        }
    }
}

```

## Python Solution

```python

class Solution:
    def gameOfLife(self, board):
        """
        Do not return anything, modify board in-place instead.
        """
        n = len(board)
        m = len(board[0])
        DX = [0, 0, 1, -1, 1, 1, -1, -1]
        DY = [1, -1, 0, 0, 1, -1, 1, -1];
        for i in range(n):
            for j in range(m):
                cnt = 0
                for k in range(8):
                    x = i + DX[k]
                    y = j + DY[k]
                    if x < 0 or x >= n or y < 0 or y >= m:
                        continue
                    cnt += board[x][y] & 1
                if (board[i][j] & 1) > 0:
                    if cnt >= 2 and cnt <= 3:
                        board[i][j] = 0b11
                elif cnt == 3:
                    board[i][j] = 0b10
        for i in range(n):
            for j in range(m):
                board[i][j] >>= 1

```




