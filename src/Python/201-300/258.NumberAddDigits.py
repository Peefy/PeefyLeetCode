
class Solution:
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        return 1 + (num - 1) % 9

if __name__ == '__main__':
    solution = Solution()
    print(solution.addDigits(38));
else:
    pass
