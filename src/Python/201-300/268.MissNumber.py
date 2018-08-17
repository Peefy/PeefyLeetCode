
class Solution:
    def missingNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        total = sum(nums)
        real = n * (n + 1) // 2
        return real - total

if __name__ == '__main__':
    solution = Solution()
    print(solution.missingNumber([3, 0, 1]));
else:
    pass
