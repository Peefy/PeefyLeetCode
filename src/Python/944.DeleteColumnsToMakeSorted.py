
class Solution:
    def minDeletionSize(self, A):
        """
        :type A: List[str]
        :rtype: int
        """
        m = len(A)
        n = len(A[0])
        count = 0
        for j in range(n):
            flag = True
            for i in range(m - 1):
                if A[i][j] > A[i + 1][j]:
                    flag = False
            if flag == True:
                count += 1
        return n - count

if __name__ == '__main__':
    solution = Solution()
    print(solution.minDeletionSize(["cba", "daf", "ghi"]))
    print(solution.minDeletionSize(["a", "b"]))
    print(solution.minDeletionSize(["zyx", "wvu", "tsr"]))
else:
    pass
