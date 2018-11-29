
class Solution:
    def findLengthOfLCIS(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        maxcount = 0
        last = -9999999
        for num in nums:
            if num > last:
                count += 1
            else:
                count = 1
            maxcount = max(maxcount, count)
            last = num
        return maxcount 
                
if __name__ == '__main__':
    solution = Solution()
    print(solution.findLengthOfLCIS([1, 3, 5, 4, 7]))
else:
    pass
