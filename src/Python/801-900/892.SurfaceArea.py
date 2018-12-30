
class Solution:
    def surfaceArea(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        result = 0
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] != 0:
                    result += grid[i][j] * 4 + 2
                if i > 0:
                    result -= min(grid[i][j], grid[i - 1][j]) * 2
                if j > 0:
                    result -= min(grid[i][j], grid[i][j - 1]) * 2
        return result


if __name__ == '__main__':
    solution = Solution()
    print(solution.surfaceArea([[2]]))
    print(solution.surfaceArea([[1,2],[3,4]]))
    print(solution.surfaceArea([[1,0],[0,2]]))
    print(solution.surfaceArea([[1,1,1],[1,0,1],[1,1,1]]))
    print(solution.surfaceArea([[2,2,2],[2,1,2],[2,2,2]]))
else:
    pass
