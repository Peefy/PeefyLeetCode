from copy import deepcopy

class Solution:
    def combinationSum(self, candidates: 'List[int]', target: 'int') -> 'List[List[int]]':
        ans = []
        r = []
        def recursive(r, ans, candidates, target, num):
            if target == 0:
                r.append(ans)
                return
            if target < candidates[0]:
                return
            for i in range(num, len(candidates)):
                if candidates[i] > target:
                    break
                l = deepcopy(ans)
                l.append(candidates[i])
                recursive(r, l, candidates, target - candidates[i], i)
        candidates.sort()
        recursive(r, ans, candidates, target, 0)
        return r

if __name__ == "__main__":
    solution = Solution()
    print(solution.combinationSum(candidates = [2,3,6,7], target = 7))
    print(solution.combinationSum(candidates = [2,3,5], target = 8))

