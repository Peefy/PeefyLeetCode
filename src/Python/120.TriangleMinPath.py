
class Solution:
    def minimumTotal(self, triangle):
        n = len(triangle)
        if n == 0:
            return 0
        dp = [0] * n
        for i in range(n):
            tmp = [0] * n
            for j in range(0, i + 1):
                if j == 0:
                    tmp[j] = dp[j] + triangle[i][j]
                elif j == i:
                    tmp[j] = dp[j - 1] + triangle[i][j]
                else:       
                    tmp[j] = triangle[i][j] + min(dp[j - 1], dp[j])
            dp = tmp
        return min(dp)

if __name__ == "__main__":
    solution = Solution()
    print(solution.minimumTotal([[2],[3,4],[6,5,7],[4,1,8,3]]))
    i = 1
