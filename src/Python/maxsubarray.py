
class Solution:
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """ 
        # 找到最优子序列的起点就可以了
        max_sum = 0
        sum = 0
        n = len(nums)
        val = max(nums)
        if val <= 0:
            return val
        for i in range(n):
            sum += nums[i]
            if sum > max_sum:
                max_sum = sum
            elif sum < 0:
                sum = 0
        return max_sum

if __name__ == '__main__':
    solution = Solution()
    print(solution.maxSubArray([11]))
    print(solution.maxSubArray([-2, 1]))
    print(solution.maxSubArray([1, -2, 1, 4, -5]))
    print(solution.maxSubArray([-2, 1, -3, 4, -1, 2, 1, -5, 4]))
else:
    pass



