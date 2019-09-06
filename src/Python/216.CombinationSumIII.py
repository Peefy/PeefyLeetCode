
import itertools

class Solution:
    def combinationSum3(self, k, n):
        return [item for item in itertools.combinations(range(1, 10), k) if sum(item) == n]


if __name__ == "__main__":
    solution = Solution()
    print(solution.combinationSum3(3, 7))
    print(solution.combinationSum3(3, 9))
