
class Solution:
    def checkPerfectNumber(self, num):
        """
        :type num: int
        :rtype: bool
        """
        return num in [6,28,496,8128,33550336,8589869056,137438691328]
   
if __name__ == '__main__':
    solution = Solution()
    print(solution.checkPerfectNumber(1))
    print(solution.checkPerfectNumber(28))
else:
    pass
