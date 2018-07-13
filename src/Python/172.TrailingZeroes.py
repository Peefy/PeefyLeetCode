
from copy import deepcopy

class Solution:
    def div5(self, n):
        count = 0
        if n == 0:
            return 0
        while n % 5 == 0:
            count += 1
            n = n // 5
        return count

    def trailingZeroes(self, n):
        """
        :type n: int
        :rtype: int
        """
        count = 0
        i = 0
        while i <= n:
            count = count + self.div5(num)
            i += 5        
        return count

if __name__ == '__main__':
    solution = Solution()
    for i in range(101):
        n = deepcopy(i)
        print(solution.trailingZeroes(i))
    print(solution.trailingZeroes(8548329))
else:
    pass
