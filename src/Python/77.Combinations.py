
from copy import deepcopy

class Solution:
    def combine(self, n: int, k: int):
        ans = []
        l = []
        for i in range(1, n + 1):
            l.append(i)
        self.recursive(ans, [], n, k, l, 0)
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
    print(solution.combine(4, 2))
   