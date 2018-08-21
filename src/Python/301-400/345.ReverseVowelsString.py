
class Solution:
    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        vowels = 'aeiouAEIOU'
        stack = []
        n = len(s)
        r = ''
        for i in range(n):
            if s[i] in vowels:
                stack.append(s[i])
        for i in range(n):
            if s[i] in vowels:
                r = r + stack.pop()
            else:
                r = r + s[i]
        return r
            
if __name__ == '__main__':
    solution = Solution()
    print(solution.reverseVowels('hello'))
    print(solution.reverseVowels('aA'))
else:
    pass
