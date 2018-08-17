
class Solution:
    def canWinNim(self, n):
        """
        :type n: int
        :rtype: bool
        """
        return n % 4 != 0

if __name__ == '__main__':
    solution = Solution()
    print(solution.canWinNim(3))
    print(solution.canWinNim(4))
    print(solution.canWinNim(5))
    print(solution.canWinNim(6))
else:
    pass
