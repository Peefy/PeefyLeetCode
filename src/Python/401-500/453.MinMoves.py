
class Solution:
    def minMoves(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return sum(nums) - min(nums) * len(nums)
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.minMoves([1, 2, 3]))
    print(solution.minMoves([1, 1, 8]))
    print(solution.minMoves([1, 2, 8]))
    print(solution.minMoves([-100, 0, 100]))
    print(solution.minMoves([1, 2, 3, 4]))
    print(solution.minMoves([1, 2, 3, 4, 5]))
    print(solution.minMoves([5, 5, 6, 8, 8]))
else:
    pass
