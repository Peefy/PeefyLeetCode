
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
        

if __name__ == '__main__':
    solution = Solution()
    print(solution.gameOfLife([[
  [0,1,0],
  [0,0,1],
  [1,1,1],
  [0,0,0]
]]))

