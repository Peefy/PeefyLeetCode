class Solution:
    def isValidSudoku(self, board: 'List[List[str]]') -> 'bool':
        m = len(board)
        n = len(board[0])
        rowshash = []
        columnhash = []
        gridhash = []
        for i in range(m // 3):
            gridhash.append([])
            for j in range(n // 3):
                gridhash[i].append(set())
        for i in range(m):
            rowshash.append(set())
        for j in range(n):
            columnhash.append(set())
        for i in range(m):
            for j in range(n):
                if board[i][j] != '.':
                    if board[i][j] in gridhash[i // 3][j // 3]:
                        return False
                    else:
                        gridhash[i // 3][j // 3].add(board[i][j])
                    if board[i][j] in rowshash[i]:
                        return False
                    else:
                        rowshash[i].add(board[i][j])
                    if board[i][j] in columnhash[j]:
                        return False
                    else:
                        columnhash[j].add(board[i][j])
        return True

if __name__ == "__main__":
    solution = Solution()
    print(solution.isValidSudoku([
        ["5","3",".",".","7",".",".",".","."],
        ["6",".",".","1","9","5",".",".","."],
        [".","9","8",".",".",".",".","6","."],
        ["8",".",".",".","6",".",".",".","3"],
        ["4",".",".","8",".","3",".",".","1"],
        ["7",".",".",".","2",".",".",".","6"],
        [".","6",".",".",".",".","2","8","."],
        [".",".",".","4","1","9",".",".","5"],
        [".",".",".",".","8",".",".","7","9"]
    ]))
    print(solution.isValidSudoku([
        ["8","3",".",".","7",".",".",".","."],
        ["6",".",".","1","9","5",".",".","."],
        [".","9","8",".",".",".",".","6","."],
        ["8",".",".",".","6",".",".",".","3"],
        ["4",".",".","8",".","3",".",".","1"],
        ["7",".",".",".","2",".",".",".","6"],
        [".","6",".",".",".",".","2","8","."],
        [".",".",".","4","1","9",".",".","5"],
        [".",".",".",".","8",".",".","7","9"]
    ]))

