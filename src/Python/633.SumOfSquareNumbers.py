
class Solution:
    def judgeSquareSum(self, c):
        """
        :type c: int
        :rtype: bool
        """
        right = int(c ** 0.5)
        left = 0
        while left <= right:
            s = left * left + right * right
            if s == c:
                return True
            elif s < c:
                left += 1
            elif s > c:
                right -= 1
        return False

if __name__ == '__main__':
    solution = Solution()
    print(solution.judgeSquareSum(3))
    print(solution.judgeSquareSum(5))
    print(solution.judgeSquareSum(7))
    print(solution.judgeSquareSum(8))
else:
    pass
