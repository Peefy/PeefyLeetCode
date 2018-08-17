
import math

class Solution:
    def countPrimes(self, n):
        """
        :type n: int
        :rtype: int
        """
        count = 0
        if n <= 2:
            return count
        if n == 2:
            return 1
        exist = True
        not_exist = False
        count = n - 1
        visit = [True] * (n + 1)
        i = 2
        while i * i <= n:
            if visit[i] == exist:
                j = i * i
                while j <= n:
                    if visit[j] == exist:
                        visit[j] = not_exist
                        count -= 1
                    j += i
            i += 1
        div = int(math.sqrt(n))
        for i in range(div, 1, -1):
            if n % i == 0:
                return count
        return count - 1

if __name__ == '__main__':
    solution = Solution()
    print(solution.countPrimes(2))
    print(solution.countPrimes(3))
    print(solution.countPrimes(4))
    print(solution.countPrimes(5))
    print(solution.countPrimes(7))
    print(solution.countPrimes(9))
    print(solution.countPrimes(10))
    print(solution.countPrimes(11))
    print(solution.countPrimes(12))
    print(solution.countPrimes(100))
    print(solution.countPrimes(499979))
else:
    pass
