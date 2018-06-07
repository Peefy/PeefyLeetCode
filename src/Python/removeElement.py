
class Solution:
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        n = len(nums)
        count = 0
        for i in range(n):
            if nums[i] != val:
                nums[count] = nums[i]
                count += 1
        return count
