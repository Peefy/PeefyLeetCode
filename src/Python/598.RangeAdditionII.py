
class Solution:
    def maxCount(self, m, n, ops):
        """
        :type m: int
        :type n: int
        :type ops: List[List[int]]
        :rtype: int
        """
        if len(ops) == 0:
            return m * n
        rows = [l[0] for l in ops]
        cols = [l[1] for l in ops]
        return min(min(rows), m) * min(min(cols), n)

if __name__ == '__main__':
    solution = Solution()
    print(solution.maxCount(3, 3, [[2, 2], [3, 3]]))
else:
    pass
