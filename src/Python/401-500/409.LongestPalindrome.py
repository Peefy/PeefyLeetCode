
from collections import Counter

class Solution:
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        counter = Counter(s)
        num = 0
        hassingle = 0
        for e in counter.values():
            if e % 2 != 0:
                hassingle = 1
                e -= 1
            num += e      
        return num + hassingle
   
if __name__ == '__main__':
    solution = Solution()
    print(solution.longestPalindrome('abccccdd'))
    print(solution.longestPalindrome('aabb'))
    print(solution.longestPalindrome('aabbc'))
else:
    pass
