
import math

class Solution:
    def search(self, rooms, visited, i, j, m, n):
        if i < 0 or i > m - 1 or j < 0 or j > n - 1 or rooms[i][j] == -1:
            return math.inf
        if rooms[i][j] == 0:
            return 0
        if visited[i][j] == 1:
            return rooms[i][j]
        visited[i][j] = 1
        if rooms[i][j] > 0 and rooms[i][j] < math.inf:
            return rooms[i][j]
        up = self.search(rooms, visited, i - 1, j, m, n)
        down = self.search(rooms, visited, i + 1, j, m, n)
        left = self.search(rooms, visited, i, j - 1, m, n)
        right = self.search(rooms, visited, i, j + 1, m, n)
        visited[i][j] = 0
        val = min(min(up, down), min(left, right))
        return val if val == math.inf else val + 1


    def wallsAndGates(self, rooms):
        if rooms is None or len(rooms) == 0 or rooms[0] is None or len(rooms[0]) == 0:
            return
        m = len(rooms)
        n = len(rooms[0])
        visited = [[0] * n for i in range(m)]
        for i in range(m):
            for j in range(n):
                if rooms[i][j] == math.inf:
                    rooms[i][j] = self.search(rooms, visited, i, j, m, n)
        return

   
if __name__ == '__main__':
    solution = Solution()

