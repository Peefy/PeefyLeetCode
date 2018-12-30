
class Solution:
    def flipAndInvertImage(self, A):
        """
        :type A: List[List[int]]
        :rtype: List[List[int]]
        """
        m = len(A)
        n = len(A[0])          
        for i in range(m):
            A[i] = A[i][::-1]
            for j in range(n):
                A[i][j] = 1 - A[i][j]
        return A

        
if __name__ == '__main__':
    solution = Solution()
    print(solution.flipAndInvertImage([[1,1,0],[1,0,1],[0,0,0]]))
else:
    pass




