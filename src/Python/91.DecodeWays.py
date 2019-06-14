
class Solution:
    def numDecodings(self, s: str) -> int:
        pp, p = 1, int(s[0] != '0')
        for i in range(1, len(s)):
            pp, p = p, pp * (9 < int(s[i-1:i+1]) <= 26) + p * (int(s[i]) > 0)
        return p

if __name__ == "__main__":
    solution = Solution()
    print(solution.numDecodings("12"))
    print(solution.numDecodings("226"))
    print(solution.numDecodings("266"))
    print(solution.numDecodings("2224"))
    print(solution.numDecodings("1010"))
