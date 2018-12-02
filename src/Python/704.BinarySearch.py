
class Solution:
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        left = 0
        right = len(nums) - 1
        while left <= right:
            middle = left + (right - left) // 2
            if nums[middle] == target:
                return middle
            elif nums[middle] < target:
                left = middle + 1
            else:
                right = middle - 1
        return -1

if __name__ == '__main__':
    solution = Solution()
    print(solution.search([-1,0,3,5,9,12], 9))
    print(solution.search([-1,0,3,5,9,12], 2))
else:
    pass
