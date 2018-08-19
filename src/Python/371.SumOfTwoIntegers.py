
class Solution:
    def getSum(self, a, b):
        """
        :type a: int
        :type b: int
        :rtype: int
        """
        while b != 0:
            carry = a & b
            a = (a ^ b) % 0x100000000 # 转换为32位
            b = (carry << 1) % 0x100000000 # 转换为32位
        return a if a <= 0x7FFFFFFF else a | (~0x100000000+1)
            
if __name__ == '__main__':
    solution = Solution()
    print(solution.getSum(1, 2))
    print(solution.getSum(11, 22))
    print(solution.getSum(111, 222))
    print(solution.getSum(-11, 222))
    print(solution.getSum(-8, -9))
    print(solution.getSum(-2147483648, 2147483647))
else:
    pass
