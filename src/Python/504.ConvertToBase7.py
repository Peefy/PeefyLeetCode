
class Solution:
    def convertToBase7(self, num):
        """
        :type num: int
        :rtype: str
        """
        if num == 0:
            return '0'
        base7list = []
        jinzhi = 7
        absnum = abs(num)
        while absnum > 0:
            base7list.append(str(absnum % jinzhi))
            absnum //= jinzhi
        if num < 0:
            base7list.append('-')
        return ''.join(base7list[::-1])
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.convertToBase7(100))
    print(solution.convertToBase7(8))
    print(solution.convertToBase7(9))
    print(solution.convertToBase7(-7))
else:
    pass
