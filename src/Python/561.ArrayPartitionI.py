
class Solution:
    def arrayPairSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        return sum(sorted(nums)[0::2])
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.arrayPairSum([1, 4, 3, 2, 5, 6]))
else:
    pass
