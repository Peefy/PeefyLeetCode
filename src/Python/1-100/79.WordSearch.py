
class Solution:
    def dfs(self, board, i, j, m, n, word, index, marked):
        if index >= len(word):
            return True
        if i < 0 or j < 0 or i >= m or j >= n:
            return False 
        if marked[i][j] == 1:
            return False
        addindex = 0
        if board[i][j] == word[index]:
            marked[i][j] = 1
            addindex = 1
        else:
            return False
        f1 = self.dfs(board, i - 1, j, m, n, word, index + addindex, marked)
        f2 = self.dfs(board, i + 1, j, m, n, word, index + addindex, marked)
        f3 = self.dfs(board, i, j - 1, m, n, word, index + addindex, marked)
        f4 = self.dfs(board, i, j + 1, m, n, word, index + addindex, marked)
        flag = f1 or f2 or f3 or f4
        if flag == False:
            marked[i][j] = False
        return flag

    def exist(self, board: list, word: str) -> bool:
        if word is None or board is None:
            return False
        m = len(board)
        n = len(board[0])
        for i in range(m):
            for j in range(n):
                if board[i][j] == word[0]:
                    marked = [ [0] * (n) for i in range(m)]
                    if self.dfs(board, i, j, m, n, word, 0, marked) == True:
                        return True
        return False

if __name__ == "__main__":
    solution = Solution()
    print(solution.exist([
        ['A','B','C','E'],
        ['S','F','C','S'],
        ['A','D','E','E']
    ], "ABCCED"))
    print(solution.exist([
        ['A','B','C','E'],
        ['S','F','C','S'],
        ['A','D','E','E']
    ], "SEE"))
    print(solution.exist([
        ['A','B','C','E'],
        ['S','F','C','S'],
        ['A','D','E','E']
    ], "ABCB"))
    print(solution.exist([["a","b"],["c","d"]], "cdba"))
    print(solution.exist([["a","a"]], "aaa"))
    print(solution.exist([["A","B","C","E"],["S","F","E","S"],["A","D","E","E"]], "ABCESEEEFS"))
   