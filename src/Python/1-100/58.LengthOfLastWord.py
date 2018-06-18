class Solution:
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s)
        if n == 0:
            return 0
        i = n - 1
        length = 0
        while i >= 0 and s[i] == ' ':
            i -= 1
        while i >= 0:
            if s[i] != ' ':
                length += 1
            else:
                break
            i -= 1
        return length
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.lengthOfLastWord('hello world'))
    print(solution.lengthOfLastWord('a'))
else:
    pass
