
class Solution:
    def repeatedSubstringPattern(self, s):
        """
        :type s: str
        :rtype: bool
        """
        return s in (s[1:] + s[:-1])
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.repeatedSubstringPattern("abab"))
    print(solution.repeatedSubstringPattern("aaaa"))
    print(solution.repeatedSubstringPattern("abaa"))
    print(solution.repeatedSubstringPattern("abcabcabcabcabc"))
else:
    pass
