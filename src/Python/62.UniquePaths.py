
class Solution:
    store = []
    def solve(self, m, n):
        if m == 1 or n == 1:
            return 1
        elif m == 2 and n == 2:
            return 2
        elif (m == 3 and n == 2) or (m == 2 and n == 3):
            return 3
        if self.store[m][n] > 0:
            return self.store[m][n]
        self.store[m-1][n] = self.solve(m - 1, n)
        self.store[m][n-1] = self.solve(m, n - 1)
        self.store[m][n] = self.store[m-1][n] + self.store[m][n-1]
        return self.store[m][n]

    def uniquePaths(self, m: int, n: int) -> int:
        self.store = [ [0] * (n + 1) for i in range(m + 1)]
        return self.solve(m, n)

if __name__ == "__main__":
    solution = Solution()
    print(solution.uniquePaths(3, 2))
    print(solution.uniquePaths(7, 3))

   