
class Solution:
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n == 1:
            return 1
        if n == 2:
            return 2
        a, b, i = 1, 2, 3
        while i <= n:
            a, b = b, a + b
            i += 1
        return b

if __name__ == '__main__':
    solution = Solution()
    print(solution.climbStairs(2))
    print(solution.climbStairs(1))
    print(solution.climbStairs(5))
else:
    pass
