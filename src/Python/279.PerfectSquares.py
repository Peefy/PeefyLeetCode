
class Solution:
    def numSquares(self, n: int) -> int:
        # 任何一个正整数都可以表示成不超过四个整数的平方之和。 推论：满足四数平方和定理的数n
        while n % 4 == 0:
            n /= 4
        if n % 8 == 7:
            return 4
        a = 0
        while a ** 2 <= n:
            b = int((n - a ** 2) ** 0.5)
            if a ** 2 + b ** 2 == n:
                return bool(a) + bool(b)
            a += 1
        return 3


if __name__ == "__main__":
    solution = Solution()
    print(solution.numSquares(12))
    print(solution.numSquares(13))
