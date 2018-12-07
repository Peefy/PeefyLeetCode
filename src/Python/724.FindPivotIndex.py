
class Solution:
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        if n == 0:
            return -1
        leftsum = 0
        rightsum = sum(nums)
        for i in range(n):
            leftsum += nums[i]
            if leftsum == rightsum:
                return i 
            rightsum -= nums[i]
        return -1

if __name__ == '__main__':
    solution = Solution()
    print(solution.pivotIndex([1, 7, 3, 6, 5, 6]))
    print(solution.pivotIndex([1, 2, 3]))
else:
    pass
