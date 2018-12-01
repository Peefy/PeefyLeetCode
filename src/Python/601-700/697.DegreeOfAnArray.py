
class Solution:
    def findShortestSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        d = {}
        for i in range(len(nums)):
            if nums[i] not in d:
                d[nums[i]] = (1, i, i)
            else:
                count, start, end = d[nums[i]]
                d[nums[i]] = (count + 1, start, i)
        maxcount = 0
        minlength = 50000
        for counts in d.values():
            count, start, end = counts
            if count > maxcount:
                maxcount = count
                minlength = end - start + 1
            elif count == maxcount:
                minlength = min(minlength, end - start + 1)
        return minlength
                
if __name__ == '__main__':
    solution = Solution()
    print(solution.findShortestSubArray([1, 2, 2, 3, 1]))
    print(solution.findShortestSubArray([1, 2, 2, 3, 1, 4, 2]))
    print(solution.findShortestSubArray([1, 2, 2, 3, 1]))
else:
    pass
