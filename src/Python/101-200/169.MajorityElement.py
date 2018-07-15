
class Solution:
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        if n <= 2:
            return nums[0]
        d = {}
        for i in range(n):
            if nums[i] not in d.keys():
                d[nums[i]] = 1
            else:
                val = d[nums[i]]
                d[nums[i]] = val + 1
        majar = max(d.values())
        for (u, v) in d.items():
            if v == majar:
                return u

if __name__ == '__main__':
    solution = Solution()
    print(solution.majorityElement([2, 2]))
    print(solution.majorityElement([1, 2, 2, 3]))
else:
    pass
