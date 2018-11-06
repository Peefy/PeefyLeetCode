
class Solution:
    def findPairs(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        if k < 0:
            return 0
        count = 0
        n = len(nums)
        d = {}
        for i in range(n):
            d[nums[i]] = i
        for i in range(n):
            if nums[i] + k in d.keys() and d[nums[i] + k] != i:
                count += 1
                d.pop(nums[i] + k, 0)
        return count

if __name__ == '__main__':
    solution = Solution()
    print(solution.findPairs([3, 1, 4, 1, 5], 2))
    print(solution.findPairs([2, 3, 4, 5, 1], 1))
    print(solution.findPairs([1, 3, 1, 5, 4], 0))
    print(solution.findPairs([1, 1, 1, 2, 1], 1))
    print(solution.findPairs([1, 1, 1, 2, 2], 0))
    print(solution.findPairs([-1, -2, -3], 1))
else:
    pass
