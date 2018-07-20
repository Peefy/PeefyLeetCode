
class Solution:
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        binstr = bin(n)
        return binstr.count('1') == 1 and binstr.count('-') == 0

if __name__ == '__main__':
    solution = Solution()
    print(solution.isPowerOfTwo(-16))
    print(solution.isPowerOfTwo(2))
    print(solution.isPowerOfTwo(3))
    print(solution.isPowerOfTwo(4))
else:
    pass
