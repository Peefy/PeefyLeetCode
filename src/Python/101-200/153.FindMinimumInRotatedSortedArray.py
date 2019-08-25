
class Solution:
    def findMin(self, nums):
        if len(nums) == 1:
            return nums[0]
        left = 0
        right = len(nums) - 1
        if nums[right] > nums[0]:
            return nums[0]
        while right >= left:
            mid = left + (right - left) // 2
            if nums[mid] > nums[mid + 1]:
                return nums[mid + 1]
            if nums[mid - 1] > nums[mid]:
                return nums[mid]
            if nums[mid] > nums[0]:
                left = mid + 1
            else:
                right = mid - 1


if __name__ == "__main__":
    solution = Solution()
    print(solution.findMin([3,4,5,1,2]))
    print(solution.findMin([4,5,6,7,0,1,2]))
