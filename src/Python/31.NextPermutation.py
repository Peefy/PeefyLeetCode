class Solution:
    def reverse(self, nums, l, r):
        while l < r:
            tmp = nums[l]
            nums[l] = nums[r]
            nums[r] = tmp
            l += 1
            r -= 1

    def nextPermutation(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        nlen = len(nums)
        i = nlen - 1
        while i > 0 and nums[i] <= nums[i - 1]:
            i -= 1
        if i == 0:
            self.reverse(nums, 0, nlen - 1)
            return
        d1 = i - 1
        i = nlen - 1
        while nums[i] <= nums[d1]:
            i -= 1
        d2 = i
        nums[d1], nums[d2] = nums[d2], nums[d1]
        self.reverse(nums, d1 + 1, nlen - 1)
        return
            

if __name__ == "__main__":
    solution = Solution()
    print(solution.nextPermutation([1, 2, 3]))
    print(solution.nextPermutation([3, 2, 1]))
    print(solution.nextPermutation([1, 3, 2]))
    print(solution.nextPermutation([1, 2, 1]))
    print(solution.nextPermutation([1, 2]))
    print(solution.nextPermutation([3, 1, 2]))
    print(solution.nextPermutation([1, 3, 2]))
    print(solution.nextPermutation([5, 5, 2, 3, 4, 7]))
    print(solution.nextPermutation([5, 4, 7, 5, 3, 2]))

