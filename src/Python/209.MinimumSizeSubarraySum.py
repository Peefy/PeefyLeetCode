
class Solution:
    def minSubArrayLen(self, s, nums):
        n = len(nums)
        ans = 9999999999
        left = 0
        sum = 0
        for i in range(n):
            sum += nums[i]
            while sum >= s:
                ans = min(ans, i + 1 - left)
                sum -= nums[left]
                left += 1
        return ans if ans != 9999999999 else 0 



if __name__ == "__main__":
    solution = Solution()
    print(solution.minSubArrayLen(7, [2,3,1,2,4,3]))

