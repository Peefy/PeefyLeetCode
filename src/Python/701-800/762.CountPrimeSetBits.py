
class Solution:
    def countPrimeSetBits(self, L, R):
        """
        :type L: int
        :type R: int
        :rtype: int
        """
        primes = {2, 3, 5, 7, 11, 13, 17, 19}
        count = 0
        for i in range(L, R + 1):
            if bin(i).count('1') in primes:
                count += 1
        return count

if __name__ == '__main__':
    solution = Solution()
    print(solution.countPrimeSetBits(6, 10))
    print(solution.countPrimeSetBits(10, 15))
else:
    pass

