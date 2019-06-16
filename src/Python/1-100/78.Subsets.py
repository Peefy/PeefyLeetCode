
from copy import deepcopy

class Solution:
    def subsets(self, nums):
        ans = [[]]
        l = []
        for i in range(1, len(nums) + 1):
            self.recursive(ans, [], len(nums), i, nums, 0)
        return ans 

    def recursive(self, ans, tmp, n, k, l, index):
        if len(tmp) == k:
            ans.append(deepcopy(tmp)) 
            return
        for i in range(index, n):
            tmp.append(l[i])
            self.recursive(ans, tmp, n, k, l, i + 1)
            tmp.pop()

if __name__ == "__main__":
    solution = Solution()
    print(solution.subsets([1, 2, 3]))
   