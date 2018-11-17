
class Solution:
    def findRelativeRanks(self, nums):
        """
        :type nums: List[int]
        :rtype: List[str]
        """
        n = len(nums)
        r = [""] * n
        medals = ["Gold Medal", "Silver Medal", "Bronze Medal"]
        sort_nums = sorted(nums, reverse=True)
        for i in range(len(sort_nums)):
            r[nums.index(sort_nums[i])] = str(i + 1) if i > 2 else medals[i]
        return r
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.findRelativeRanks([5, 4, 3, 2, 1]))
else:
    pass
