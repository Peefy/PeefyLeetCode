
from collections import Counter

class Solution:
    def firstUniqChar(self, s):
        """
        :type s: str
        :rtype: int
        """
        counter = Counter(s)
        index = len(s)
        for k in counter.keys():
            if counter.get(k) == 1:
                index = min(index, s.index(k))
        return index if index < len(s) else -1
                  
if __name__ == '__main__':
    solution = Solution()
    print(solution.firstUniqChar('leetcode'))
    print(solution.firstUniqChar('loveleetcode'))
else:
    pass
