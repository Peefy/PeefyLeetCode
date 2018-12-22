
class Solution:
    def transpose(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        A[:] = map(list,zip(*A))
        return A


if __name__ == '__main__':
    solution = Solution()
    print(solution.transpose([[1, 2, 3], [4, 5, 6], [7, 8, 9]]))
else:
    pass
