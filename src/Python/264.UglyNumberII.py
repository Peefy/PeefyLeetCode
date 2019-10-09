
class Solution:
    def nthUglyNumber(self, n):
        dp = [0] * n
        dp[0] = 1
        p2 = 0
        p3 = 0
        p5 = 0
        for i in range(1, n):
            dp[i] = min(2 * dp[p2], 3 * dp[p3], 5 * dp[p5])
            if dp[i] >= 2 * dp[p2]:
                p2 += 1
            if dp[i] >= 3 * dp[p3]:
                p3 += 1
            if dp[i] >= 5 * dp[p5]:
                p5 += 1
        return dp[-1]

    
if __name__ == "__main__":
    solution = Solution()
    print(solution.nthUglyNumber(10))

