
import re

class Solution:
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if s is None:
            return False
        if s == '':
            return True      
        s = re.sub(r'[^0-9a-zA-z]', '', s)
        s = re.sub(r"[`~!@#$%^&*()_+]", '', s)
        s = s.upper()
        n = len(s)
        for i in range(n):
            if s[i] != s[n - i - 1]:
                return False
        return True

if __name__ == '__main__':
    solution = Solution()
    print(solution.isPalindrome('"A man, a plan, a canal: Panama"'))
    print(solution.isPalindrome("`l;`` 1o1 ??;l`"))
    print(solution.isPalindrome('asa'))
else:
    pass
