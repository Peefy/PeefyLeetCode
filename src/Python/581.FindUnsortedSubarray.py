
class Solution:
    def findUnsortedSubarray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        numssort = sorted(nums)
        n = len(nums)
        start = 1
        end = 0
        for i in range(n):
            if nums[i] != numssort[i]:
                start = i
                break
        for i in range(n):
            j = n - i - 1
            if nums[j] != numssort[j]:
                end = j
                break
        return end - start + 1

if __name__ == '__main__':
    solution = Solution()
    print(solution.findUnsortedSubarray([2,6,4,8,10,9,15]))
else:
    pass
