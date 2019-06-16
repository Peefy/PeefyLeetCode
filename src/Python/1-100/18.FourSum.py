class Solution:
    def fourSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[List[int]]
        """
        ans = []
        nums.sort()
        n = len(nums)
        for i in range(n - 1):
            if i > 0 and nums[i] == nums[i - 1]:
                continue
            for j in range(i + 1, n):
                if j > i + 1 and nums[j] == nums[j - 1]:
                    continue
                l = j + 1
                r = n - 1
                while l < r:
                    if l > j + 1 and nums[l] == nums[l - 1]:
                        l += 1
                    elif nums[i]+nums[j]+nums[l]+nums[r]<target:
                        l += 1
                    elif nums[i]+nums[j]+nums[l]+nums[r]>target:
                        r -= 1
                    else:
                        ans.append([nums[i], nums[j], nums[l], nums[r]])
                        l += 1
                        r -= 1
        return ans
            

if __name__ == "__main__":
    solution = Solution()
    print(solution.fourSum([1, 0, -1, 0, -2, 2], 0))
