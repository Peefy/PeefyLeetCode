
class Solution:
    def containsNearbyDuplicate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: bool
        """
        d = {}
        n = len(nums)
        for i in range(n):
            if nums[i] in d.keys():
                if i - d[nums[i]] <= k:
                    return True
                else:
                    d[nums[i]] = i
            else:
                d[nums[i]] = i          
        return False

if __name__ == '__main__':
    solution = Solution()
    print(solution.containsNearbyDuplicate([1,0,1,1], 1))
    print(solution.containsNearbyDuplicate([1,2,3,1,2,3], 2))
else:
    pass
