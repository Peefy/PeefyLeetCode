
class Solution:
    def subsetsWithDup(self, nums):
        ans = []
        nums.sort()
        self.recursive(ans, [], len(nums), nums, 0)
        return ans 

    def recursive(self, ans, tmp, n, l, index):
        ans.append(tmp[:])
        if len(tmp) == n:    
            return
        for i in range(index, n):
            if i > index and l[i] == l[i - 1]:
                continue
            tmp.append(l[i])
            self.recursive(ans, tmp, n, l, i + 1)
            tmp.pop()

if __name__ == "__main__":
    solution = Solution()
    print(solution.subsetsWithDup([1, 2, 2]))
   