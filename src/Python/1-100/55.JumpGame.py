
class Solution:
    def canJump(self, nums):
        nums = nums[::-1]
        res = 0
        for i in range(1, len(nums)):
            if nums[i] >= i - res:
                res = i
        return res == len(nums) - 1


if __name__ == "__main__":
    solution = Solution()
    print(solution.canJump([2, 3, 1, 1, 4]))
    print(solution.canJump([3, 2, 1, 0, 4]))

   