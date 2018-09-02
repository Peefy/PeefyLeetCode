
class Solution:
    def thirdMax(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums = sorted(list(set(nums)))
        return max(nums) if len(nums) < 3 else nums[-3]

if __name__ == '__main__':
    solution = Solution()
    print(solution.thirdMax([2, 2, 3, 1]))
    print(solution.thirdMax([1, 2]))
    print(solution.thirdMax([1, 1, 2]))
    print(solution.thirdMax([3, 2, 1]))
    print(solution.thirdMax([1, 2, 2, 5, 3, 5]))
else:
    pass
