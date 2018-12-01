
from collections import Counter

class Solution:
    def findErrorNums(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        counter = Counter(nums)
        ele1, ele2, n = 0, 0, len(nums)
        for k in counter.keys():
            if counter[k] > 1:
                ele1 = k
                break
        ele2 = int((n + 1) * n / 2 - sum(counter.keys()))
        return [ele1, ele2]

if __name__ == '__main__':
    solution = Solution()
    print(solution.findErrorNums([1, 2, 2, 4]))
else:
    pass
