
class Solution:
    def dfs(self, grid, r, c):
        nr = len(grid)
        nc = len(grid[0])
        grid[r][c] = '0'
        if r - 1 >= 0 and grid[r-1][c] == '1': 
            self.dfs(grid, r - 1, c)
        if r + 1 < nr and grid[r+1][c] == '1': 
            self.dfs(grid, r + 1, c)
        if c - 1 >= 0 and grid[r][c-1] == '1': 
            self.dfs(grid, r, c - 1)
        if c + 1 < nc and grid[r][c+1] == '1': 
            self.dfs(grid, r, c + 1)

    def numIslands(self, grid: List[List[str]]) -> int:
        nr = len(grid)
        if nr == 0:
            return 0
        nc = len(grid[0])
        num_islands = 0
        for r in range(nr):
            for c in range(nc):
                if grid[r][c] == '1':
                    num_islands += 1
                    self.dfs(grid, r, c)
        return num_islands

if __name__ == "__main__":
    solution = Solution()


