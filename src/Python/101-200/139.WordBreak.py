
class Solution:
    def wordBreak(self, s, wordDict):
        if len(s) == 0:
            return False
        dp = [0] * (len(s) + 1)
        dp[0] = 1
        for i in range(1, len(s) + 1):
            for j in range(0, i):
                if dp[j] == 1 and s[j:i] in wordDict:
                    dp[i] = 1
        return dp[len(s)] == 1


if __name__ == "__main__":
    solution = Solution()
    print(solution.wordBreak(s = "aaaa", wordDict = ["aaa", "aaaa"]))
    print(solution.wordBreak(s = "leetcode", wordDict = ["leet", "code"]))
    print(solution.wordBreak(s = "applepenapple", wordDict = ["apple", "pen"]))
    print(solution.wordBreak(s = "catsandog", wordDict = ["cats", "dog", "sand", "and", "cat"]))    