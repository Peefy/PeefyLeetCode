
class Solution:
    def productExceptSelf(self, nums):
        n = len(nums)
        left = 1
        right = 1
        res = [1] * n
        for i in range(n):
            res[i] *= left
            left *= nums[i]
            res[n - 1 - i] *= right
            right *= nums[n - 1 - i]
        return res


if __name__ == "__main__":
    solution = Solution()
    print(solution.productExceptSelf([1, 2, 3, 4]))
    
