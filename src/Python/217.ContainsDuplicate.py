
class Solution:
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        n = len(nums)
        if n == 0:
            return False
        s = {nums[0]}
        for i in range(1, n):
            if nums[i] in s:
                return True
            else:
                s.add(nums[i])
        return False

if __name__ == '__main__':
    solution = Solution()
    print(solution.containsDuplicate([1,2,2,3])
else:
    pass
