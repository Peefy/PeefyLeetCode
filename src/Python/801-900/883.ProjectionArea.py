
class Solution:
    def projectionArea(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        area = 0
        for i in range(len(grid)):
            xy, yz, xz = 0, 0, 0
            for j in range(len(grid[0])):
                xy += 0 if grid[i][j] == 0 else 1
                yz = max(yz, grid[i][j])
                xz = max(xz, grid[j][i])
            area += (xy + yz + xz)
        return area 
        

if __name__ == '__main__':
    solution = Solution()
    print(solution.projectionArea([[2]]))
    print(solution.projectionArea([[1,2],[3,4]]))
    print(solution.projectionArea([[1,0],[0,2]]))
    print(solution.projectionArea([[1,1,1],[1,0,1],[1,1,1]]))
    print(solution.projectionArea([[2,2,2],[2,1,2],[2,2,2]]))
else:
    pass
