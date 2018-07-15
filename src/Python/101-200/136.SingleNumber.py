
class Solution:
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        n = len(nums)
        i = 0
        while i < n - 1:
            if nums[i] != nums[i + 1]:
                return nums[i]
            i += 2
        return nums[n - 1]

if __name__ == '__main__':
    solution = Solution()
    print(solution.singleNumber([1, 2, 2]))
    print(solution.singleNumber([4, 1, 2, 1, 2]))
else:
    pass
