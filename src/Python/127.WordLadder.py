
class Solution:

    def bfs(self, beginWord, endWord, wordList, first):
        for word in wordList:
            if visited == 1:
                continue
            for i in range(len(first)):
                if first[i] != word[i]:
                    diff += 1
            visited[i] = 1
            if diff == 1:
                first = 
                self.count += 1
                self.bfs(beginWord, endWord, wordList, first)

    def ladderLength(self, beginWord, endWord, wordList, first):
        self.count = 0
        first = beginWord
        self.visited = [0] * len(wordList)
        for word in wordList:

        return self.count


if __name__ == "__main__":
    solution = Solution()
    print(
        solution.ladderLength("hit", "cog",
                              ["hot", "dot", "dog", "lot", "log", "cog"]))
    print(
        solution.ladderLength("hit", "cog",
                              ["hot", "dot", "dog", "lot", "log"]))
