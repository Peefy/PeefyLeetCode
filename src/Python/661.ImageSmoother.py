
class Solution:
    def imageSmoother(self, M):
        """
        :type M: List[List[int]]
        :rtype: List[List[int]]
        """
        m = len(M)
        n = len(M[0])
        N = [[0 for j in range(n)] for i in range(m)]
        for i in range(m):
            for j in range(n):
                count = 1
                N[i][j] = M[i][j]
                if i - 1 >= 0 and j - 1 >= 0:
                    N[i][j] += M[i - 1][j - 1] #1
                    count += 1
                if i - 1 >= 0 and j + 1 < n:
                    N[i][j] += M[i - 1][j + 1] #3
                    count += 1
                if j - 1 >= 0:
                    N[i][j] += M[i][j - 1] #4
                    count += 1
                if j + 1 < n:
                    N[i][j] += M[i][j + 1] #5
                    count += 1
                if i + 1 < m and j + 1 < n:
                    N[i][j] += M[i + 1][j + 1] # 8
                    count += 1
                if i + 1 < m and j - 1 >= 0:
                    N[i][j] += M[i + 1][j - 1] #6
                    count += 1
                if i + 1 < m:
                    N[i][j] += M[i + 1][j] #7
                    count += 1
                if i - 1 >= 0:
                    N[i][j] += M[i - 1][j] #2
                    count += 1
                N[i][j] //= count 
        return N

if __name__ == '__main__':
    solution = Solution()
    print(solution.imageSmoother([[1,1,1], [1,1,1], [1,1,1]]))
    print(solution.imageSmoother([[2,3,4],[5,6,7],[8,9,10],[11,12,13],[14,15,16]]))
else:
    pass
