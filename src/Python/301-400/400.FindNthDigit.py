
import math

class Solution:
    def findNthDigit(self, n):
        """
        :type n: int
        :rtype: int
        """
        k = int(math.log10(n)) + 1
        sum = 0
        for i in range(k):
            sum += 9 * 10 ** i * (i + 1)
            if sum > n:
                sum -= 9 * 10 ** i * (i + 1)
                break
        after = n - sum
        num_index = (after - 1) // (i + 1)
        num_bit = (after - 1) % (i + 1)
        low = 10 ** i
        num = low + num_index
        return int(str(num)[num_bit])

if __name__ == '__main__':
    solution = Solution()
    print(solution.findNthDigit(3))
    print(solution.findNthDigit(10))
    print(solution.findNthDigit(11))
    print(solution.findNthDigit(12))
    print(solution.findNthDigit(13))
    print(solution.findNthDigit(100))
    print(solution.findNthDigit(190))
    print(solution.findNthDigit(1000))
else:
    pass
