
class Solution:
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        n = len(nums)
        left = 0
        right = n - 1
        if target > nums[right]:
            return right + 1
        while left < right:
            middle = (left + right) // 2
            if nums[middle] == target:
                return middle
            elif nums[middle] < target:
                left = middle + 1
            else:
                right = middle - 1
        if target > nums[left]:
            return left + 1
        return left

if __name__ == '__main__':
    solution = Solution()
    print(solution.searchInsert([1, 2, 3, 4, 5], 0))
    print(solution.searchInsert([1, 3, 4, 5], 2))
    print(solution.searchInsert([1, 2, 3, 4, 5], 1.1))
    print(solution.searchInsert([1, 2, 3, 4, 5], 4.5))
    print(solution.searchInsert([1, 2, 3, 4, 5], 6))
else:
    pass
