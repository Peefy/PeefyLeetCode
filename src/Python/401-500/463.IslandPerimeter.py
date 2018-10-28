
class Solution:
    def getLength(self, grid, i, j, height, width):
        count = 0
        if grid[i][j] == 0:
            return count
        if j - 1 == -1:
            count += 1
        else:
            count += grid[i][j - 1] == 0
        if j + 1 == width:
            count += 1
        else:
            count += grid[i][j + 1] == 0
        if i - 1 == -1:
            count += 1
        else:
            count += grid[i - 1][j] == 0
        if i + 1 == height:
            count += 1
        else:
            count += grid[i + 1][j] == 0
        return count

    def islandPerimeter(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        count = 0
        height = len(grid)
        width = len(grid[0])
        for i in range(height):
            for j in range(width):
                count += self.getLength(grid, i, j, height, width)
        return count

if __name__ == '__main__':
    solution = Solution()
    print(solution.islandPerimeter([[0,1,1]]))
    print(solution.islandPerimeter([[0,1,0,0], [1,1,1,0], [0,1,0,0], [1,1,0,0]]))
else:
    pass
