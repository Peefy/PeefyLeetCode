from copy import deepcopy

class Solution:
    def permuteUnique(self, nums: 'List[int]') -> 'List[List[int]]':
        ans = []
        tmp = []
        m = [0] * len(nums)
        def recursive(i, nums, ans, tmp, m):
            s = set()
            if len(tmp) == len(nums):
                return ans.append(deepcopy(tmp))
            for j in range(len(nums)):
                if m[j] == 0 and nums[j] not in s:
                    s.add(nums[j])
                    tmp.append(nums[j])
                    m[j] = 1
                    recursive(j + 1, nums, ans, tmp, m)
                    m[j] = 0
                    tmp.pop()
        recursive(0, nums, ans, tmp, m)
        return ans

if __name__ == "__main__":
    solution = Solution()
    print(solution.permuteUnique([1, 1, 2]))
    print(solution.permuteUnique([1, 2, 3]))
    print(solution.permuteUnique([2, 2]))

   