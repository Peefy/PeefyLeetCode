
class Solution:
    def maximumProduct(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        return max(nums[-1] * nums[-2] * nums[-3], \
            nums[0] * nums[1] * nums[-1])

if __name__ == '__main__':
    solution = Solution()
    print(solution.maximumProduct([0, 0, 0]))
    print(solution.maximumProduct([1, 2, 3]))
    print(solution.maximumProduct([1, 2, 3, 4]))
    print(solution.maximumProduct([-1, 2, 3]))
else:
    pass
