
class Solution:
    def isToeplitzMatrix(self, matrix):
        """
        :type matrix: List[List[int]]
        :rtype: bool
        """
        rows = len(matrix)
        columns = len(matrix[0])
        i = 0   
        j = 0
        while i + 1 < rows:
            while j + 1 < columns:
                if matrix[i][j] != matrix[i+1][j+1]:
                    return False
                j += 1
            j = 0
            i += 1
        return True

if __name__ == '__main__':
    solution = Solution()
    print(solution.isToeplitzMatrix([[1, 2, 3, 4], [5, 1, 2, 3], [9, 5, 1, 2]]))
    print(solution.isToeplitzMatrix([[1,2],[2,2]]))
    print(solution.isToeplitzMatrix([[22,0,94,45,46,96],[10,22,80,94,45,46]]))
else:
    pass

