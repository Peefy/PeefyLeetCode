from copy import deepcopy

class Solution:
    def combinationSum2(self, candidates: 'List[int]', target: 'int') -> 'List[List[int]]':
        ans = []
        r = []
        def recursive(r, ans, candidates, target, num):
            if target == 0:
                r.append(ans)
                return
            if target < candidates[0]:
                return
            while num < len(candidates) and candidates[num] <= target:
                l = deepcopy(ans)
                l.append(candidates[num])
                recursive(r, l, candidates,target-candidates[num],num+1);
                q = num
                while q + 1 < len(candidates) and candidates[num] == candidates[q + 1]:
                    q += 1
                if q > num:
                    num = q + 1
                    if q == len(candidates) - 1:
                        break
                else:
                    num += 1
        candidates.sort()
        recursive(r, ans, candidates, target, 0)
        return r


if __name__ == "__main__":
    solution = Solution()
    print(solution.combinationSum2(candidates = [10,1,2,7,6,1,5], target = 8))
    print(solution.combinationSum2(candidates = [2,5,2,1,2], target = 5))
   