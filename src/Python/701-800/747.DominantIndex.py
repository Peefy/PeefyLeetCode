
class Solution:
    def dominantIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maxnum = -1
        secondmaxnum = -1
        maxindex = 0
        for i, num in enumerate(nums):
            if num > maxnum:
                secondmaxnum = maxnum
                maxnum = num
                maxindex = i
            elif num > secondmaxnum:
                secondmaxnum = num
        return maxindex if maxnum >= 2 * secondmaxnum else -1

if __name__ == '__main__':
    solution = Solution()
    print(solution.dominantIndex([3, 6, 1, 0]))
    print(solution.dominantIndex([1, 2, 3, 4]))
else:
    pass

