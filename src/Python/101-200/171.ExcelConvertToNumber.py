
class Solution:
    def titleToNumber(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s)
        sum = 0
        for i in range(n):
            j = n - i - 1
            code = (ord(s[j]) - ord('A') + 1)
            sum += code * 26 ** i
        return sum

if __name__ == '__main__':
    solution = Solution()
    print(solution.titleToNumber('AA'))
    print(solution.titleToNumber('ZY'))
else:
    pass
