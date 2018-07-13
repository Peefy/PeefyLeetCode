
class Solution:
    def trailingZeroes(self, n):
        """
        :type n: int
        :rtype: int
        """
        count = 0
        while True:
            n = n // 5
            if n == 0:
                break
            else:
                count += n
        return count

if __name__ == '__main__':
    solution = Solution()
    for i in range(101):
        print(solution.trailingZeroes(i))
else:
    pass
