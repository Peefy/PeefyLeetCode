
class Solution:
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        slist = list(s)
        for i in range(len(s) - 1):
            slist.insert(2 * i + 1, '#')
        maxstrlist = []
        maxlength = 0
        for i in range(len(slist)):
            left = i - 1
            right = i + 1
            now = 1 if slist[i] != '#' else 0
            while left >= 0 and right <= len(slist) - 1 and slist[left] == slist[right]:
                if slist[left] != '#':
                    now += 2
                left -= 1
                right += 1
            if now > maxlength:
                maxlength = now
                maxstrlist = slist[left + 1:right:]
        return ''.join(maxstrlist).replace('#', '')


if __name__ == "__main__":
    solution = Solution()
    print(solution.longestPalindrome("babad"))
    print(solution.longestPalindrome("cbbd"))
    print(solution.longestPalindrome("abcd"))
    print(solution.longestPalindrome("ac"))
    print(solution.longestPalindrome("ccd"))
    print(solution.longestPalindrome("ccc"))
