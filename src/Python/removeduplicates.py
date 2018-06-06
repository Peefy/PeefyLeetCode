
class Solution:
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        m = list(set(nums))
        m.sort()
        for i in range(len(m)):
            nums[i] = m[i]
        return len(m)
