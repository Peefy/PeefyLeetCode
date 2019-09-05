
class Solution:
    def rob(self, nums):
        n = len(nums)
        if n == 1:
            return nums[0]
        dpa = [0] * (n + 1)
        dpb = [0] * (n + 1)
        for i in range(2, n + 1):
            dpa[i] = max(dpa[i - 1], dpa[i - 2] + nums[i - 2])
            dpb[i] = max(dpb[i - 1], dpb[i - 2] + nums[i - 1])
        return max(dpa[n], dpb[n])


if __name__ == "__main__":
    solution = Solution()
    print(solution.rob([2,3,2]))
    print(solution.rob([1,2,3,1]))
