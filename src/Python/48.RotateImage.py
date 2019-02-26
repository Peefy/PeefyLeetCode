class Solution:
    def rotate(self, matrix) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        c = len(matrix)
        matrix[:] = [[matrix[c-i-1][j] for i in range(c)] for j in range(c)]



if __name__ == "__main__":
    solution = Solution()
    print(solution.rotate(matrix = 
        [
        [1,2,3],
        [4,5,6],
        [7,8,9]
    ]))
    print(solution.rotate(matrix =
        [
        [ 5, 1, 9,11],
        [ 2, 4, 8,10],
        [13, 3, 6, 7],
        [15,14,12,16]
    ]))
    print(solution.rotate(matrix =
        [
        [15,13, 2, 5],
        [14, 3, 4, 1],
        [12, 6, 8, 9],
        [16, 7,10,11]
    ]))

   