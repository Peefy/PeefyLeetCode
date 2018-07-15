
from copy import deepcopy

class Solution:
    # @param n, an integer
    # @return an integer
    def reverseBits(self, n):
        JINZHI = 2
        num = 0
        for i in range(32):
            bit =  n % JINZHI
            n = n // JINZHI
            num += 2 ** (31 - i) * bit
        return num

if __name__ == '__main__':
    solution = Solution()
    print(solution.reverseBits(43261596))
else:
    pass
