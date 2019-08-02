
class Solution:
    def findPeakElement(self, nums):
        l = 0
        right = len(nums) - 1
        while l < r:
            mid = (l + r) // 2
            if nums[mid] > nums[mid + 1]:
                r = mid
            else:
                l = mid + 1
        return l


if __name__ == "__main__":
    solution = Solution()
    print(solution.findPeakElement([1,2,3,1]))
    print(solution.findPeakElement([1,2,1,3,5,6,4]))
