
class Solution:
    def smallestRangeI(self, A, K):
        """
        :type A: List[int]
        :type K: int
        :rtype: int
        """
        return max(max(A) - min(A) - 2 * K, 0)


if __name__ == '__main__':
    solution = Solution()
    print(solution.smallestRangeI(A = [1], K = 0))
    print(solution.smallestRangeI(A = [0,10], K = 2))
    print(solution.smallestRangeI(A = [1,3,6], K = 3))
    print(solution.smallestRangeI(A = [2,7,2], K = 1))
else:
    pass


