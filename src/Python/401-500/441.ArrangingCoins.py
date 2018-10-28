
class Solution:
    def arrangeCoins(self, n):
        """
        :type n: int
        :rtype: int
        """
        return int(-1 + (1 + 8 * n) ** 0.5 / 2 + 0.5)

if __name__ == '__main__':
    solution = Solution()
    print(solution.arrangeCoins(0))
    print(solution.arrangeCoins(1))
    print(solution.arrangeCoins(2))
    print(solution.arrangeCoins(3))
    print(solution.arrangeCoins(5))
    print(solution.arrangeCoins(8))
    print(solution.arrangeCoins(10))
    print(solution.arrangeCoins(11))
else:
    pass
