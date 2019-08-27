
class Solution:
    def rangeBitwiseAnd(self, m, n):
        count = 0
        while m != n:
            m >>= 1
            n >>= 1
            count += 1
        return m << count


if __name__ == "__main__":
    solution = Solution()
    print(solution.rangeBitwiseAnd(5, 7))


