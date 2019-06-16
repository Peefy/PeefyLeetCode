
class Solution:
    def setZeroes(self, matrix) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        m = len(matrix)
        n = len(matrix[0])
        rowLineSet = set()
        columnLineSet = set()
        for i in range(m):
            for j in range(n):
                if matrix[i][j] == 0:
                    rowLineSet.add(i)
                    columnLineSet.add(j)
        for i in range(m):
            for j in range(n):
                if i in rowLineSet or j in columnLineSet:
                    matrix[i][j] = 0
        return matrix

if __name__ == "__main__":
    solution = Solution()
    print(solution.setZeroes([
        [1, 1, 1],
        [1, 0, 1],
        [1, 1, 1]
    ]))

   