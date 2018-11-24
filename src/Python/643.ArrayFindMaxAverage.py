
class Solution:
    def findMaxAverage(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: float
        """
        n = len(nums)
        maxsum = sum(nums[0:k])
        lastsum = maxsum
        for i in range(k, n):
            nowsum = lastsum - nums[i - k] + nums[i]
            lastsum, maxsum = nowsum, max(nowsum, maxsum)
        return maxsum / k

if __name__ == '__main__':
    solution = Solution()
    print(solution.findMaxAverage([1, 12, -5, -6, 50, 3], 4))
    print(solution.findMaxAverage([0, 4, 0, 3, 2], 1))
else:
    pass
