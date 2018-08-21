
import collections as c

class Solution:
    def findTheDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: str
        """
        res = 0
        for e in s:
            res -= ord(e)
        for e in t:
            res += ord(e)
        return chr(res)
        # return list(collections.Counter(t)-collections.Counter(s))[0]
                  
if __name__ == '__main__':
    solution = Solution()
    print(solution.findTheDifference("abcd", "abcde"))
else:
    pass
