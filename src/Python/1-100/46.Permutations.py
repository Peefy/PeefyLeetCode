from copy import deepcopy

class Solution:
    def permute(self, nums: 'List[int]') -> 'List[List[int]]':
        ans = []
        tmp = []
        m = {}
        for num in nums:
            m[num] = 0
        def recursive(i, nums, ans, tmp, m):
            if len(tmp) == len(nums):
                return ans.append(deepcopy(tmp))
            for j in range(len(nums)):
                if m[nums[j]] == 0:
                    tmp.append(nums[j])
                    m[nums[j]] += 1
                    recursive(j + 1, nums, ans, tmp, m)
                    tmp.pop()
                    m[nums[j]] -= 1
        recursive(0, nums, ans, tmp, m)
        return ans

if __name__ == "__main__":
    solution = Solution()
    print(solution.permute([1, 2, 3]))
    print(solution.permute([1]))

   