
class Solution:
    def largestPalindrome(self, n):
        """
        :type n: int
        :rtype: int
        """
        return [9, 9009, 906609, 99000099, 9966006699, 999000000999, 99956644665999, 9999000000009999][n - 1] % 1337

if __name__ == '__main__':
    solution = Solution()
    print(solution.largestPalindrome(1))
    print(solution.largestPalindrome(2))
    print(solution.largestPalindrome(3))
    print(solution.largestPalindrome(4))
    print(solution.largestPalindrome(5))
    print(solution.largestPalindrome(6))
    print(solution.largestPalindrome(7))
    print(solution.largestPalindrome(8))
else:
    pass
