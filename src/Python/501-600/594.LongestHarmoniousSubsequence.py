
from collections import Counter

class Solution:
    def findLHS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        d = Counter(nums)
        for v in d.keys():
            if v - 1 in d.keys() and d[v] + d[v - 1] > count:
                count = d[v] + d[v - 1]
        return count

if __name__ == '__main__':
    solution = Solution()
    print(solution.findLHS([1,3,2,2,5,2,3,7]))
else:
    pass
