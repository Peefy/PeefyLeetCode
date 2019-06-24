class Solution:
    def ladderLength(self, beginWord, endWord, wordList):
        s = set(wordList)


if __name__ == "__main__":
    solution = Solution()
    print(
        solution.ladderLength("hit", "cog",
                              ["hot", "dot", "dog", "lot", "log", "cog"]))
    print(
        solution.ladderLength("hit", "cog",
                              ["hot", "dot", "dog", "lot", "log"]))
