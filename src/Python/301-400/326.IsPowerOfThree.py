
class Solution:
    def isPowerOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        return n > 0 and 1162261467 % n == 0

if __name__ == '__main__':
    solution = Solution()
    print(solution.isPowerOfThree(3))
    print(solution.isPowerOfThree(9))
    print(solution.isPowerOfThree(0))
    print(solution.isPowerOfThree(45))
else:
    pass
