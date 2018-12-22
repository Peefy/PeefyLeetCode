
class Solution:
    def numMagicSquaresInside(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        count = 0
        for i in range(len(grid) - 2):
            for j in range(len(grid[0]) - 2):
                s = set()
                for m in range(3):
                    for n in range(3):
                        if grid[i + m][j + n] > 9 or grid[i + m][j + n] < 1:
                            break
                        s.add(grid[i + m][j + n])
                if len(s) != 9:
                    continue
                summ = sum(grid[i][j : j + 3])
                if sum(grid[i + 1][j : j + 3]) != summ:
                    continue 
                if sum(grid[i + 2][j : j + 3]) != summ:
                    continue
                if grid[i][j] + grid[i + 1][j] + grid[i + 2][j] != summ:
                    continue
                if grid[i][j + 1] + grid[i + 1][j + 1] + grid[i + 2][j + 1] != summ:
                    continue
                if grid[i][j + 2] + grid[i + 1][j + 2] + grid[i + 2][j + 2] != summ:
                    continue
                if grid[i][j] + grid[i + 1][j + 1] + grid[i + 2][j + 2] != summ:
                    continue
                if grid[i + 2][j] + grid[i + 1][j + 1] + grid[i][j + 2] != summ:
                    continue
                count += 1
        return count


if __name__ == '__main__':
    solution = Solution()
    print(solution.numMagicSquaresInside([[4,3,8,4], [9,5,1,9], [2,7,6,2]]))
    print(solution.numMagicSquaresInside([[10,3,5],[1,6,11],[7,9,2]]))
    print(solution.numMagicSquaresInside([[3,2,9,2,7],[6,1,8,4,2],[7,5,3,2,7],[2,9,4,9,6],[4,3,8,2,5]]))
else:
    pass
