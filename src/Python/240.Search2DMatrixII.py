
class Solution:
    def binarySearch(self, matrix, target, left, right, up, down):
        if left > right or up > down:
            return False
        elif target < matrix[up][left] or target > matrix[down][right]:
            return False
        mid = left + (right - left) // 2
        row = up
        while row <= down and matrix[row][mid] <= target:
            if matrix[row][mid] == target:
                return True
            row += 1
        return self.binarySearch(matrix, target, left, mid - 1, row, down) or self.binarySearch(matrix, target, mid + 1, right, up, row - 1)


    def searchMatrix(self, matrix, target):
        if len(matrix) == 0:
            return False
        return self.binarySearch(matrix, target, 0, len(matrix[0]) - 1, 0, len(matrix) - 1)


if __name__ == "__main__":
    solution = Solution()
    print(solution.searchMatrix([
        [1,   4,  7, 11, 15],
        [2,   5,  8, 12, 19],
        [3,   6,  9, 16, 22],
        [10, 13, 14, 17, 24],
        [18, 21, 23, 26, 30]
    ], target=5))
    
