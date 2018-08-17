
class Solution:
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        zeroindex = -1
        for i in range(n):
            if nums[i] == 0 and zeroindex == -1:
                zeroindex = i
            elif nums[i] != 0 and zeroindex != -1:
                nums[zeroindex] = nums[i]
                nums[i] = 0
                zeroindex += 1
        return nums

if __name__ == '__main__':
    solution = Solution()
    print(solution.moveZeroes([3, 0, 1, 1, 2, 0, 5, 0, 2, 0, 4]));
else:
    pass
