
from copy import deepcopy

class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        return bin(n).count('1')

if __name__ == '__main__':
    solution = Solution()
    print(solution.hammingWeight(11))
    print(solution.hammingWeight(127))
else:
    pass
