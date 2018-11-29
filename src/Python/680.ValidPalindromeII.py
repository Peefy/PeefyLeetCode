
class Solution:
    def validPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        i, j = 0, len(s) - 1
        while i <= j and s[i] == s[j]:
            i += 1
            j -= 1
        if i > j:
            return True
        ii = i + 1
        jj = j
        while ii <= jj and s[ii] == s[jj]:
            ii += 1
            jj -= 1
        if ii > jj:
            return True
        ii = i 
        jj = j - 1
        while ii <= jj and s[ii] == s[jj]:
            ii += 1
            jj -= 1
        if ii > jj:
            return True
        return False
                
if __name__ == '__main__':
    solution = Solution()
    print(solution.validPalindrome("aba"))
    print(solution.validPalindrome("abc"))
    print(solution.validPalindrome("abac"))
    print(solution.validPalindrome("abca"))
else:
    pass
