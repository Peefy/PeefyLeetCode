
class Solution:
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count, maxcount = 0, 0
        for num in nums:
            if num == 1:
                count += 1
            else:
                maxcount = max(maxcount, count)
                count = 0
        return max(maxcount, count)

if __name__ == '__main__':
    solution = Solution()
    print(solution.findMaxConsecutiveOnes([1, 1, 0, 1, 1, 1]))
    print(solution.findMaxConsecutiveOnes([1, 0, 1, 1, 0, 1]))
    print(solution.findMaxConsecutiveOnes([1, 1, 0, 0, 1, 1, 1, 0, 1, 1]))
else:
    pass
