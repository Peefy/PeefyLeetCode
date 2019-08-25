
from collections import defaultdict

class Solution:
    def __init__(self):
        self.length = 0
        self.all_combo_dict = defaultdict(list)

    def visitWordNode(self, queue, visited, others_visited):
        current_word, level = queue.pop(0)
        for i in range(self.length):
            intermediate_word = current_word[:i] + "*" + current_word[i+1:]
            for word in self.all_combo_dict[intermediate_word]:
                if word in others_visited:
                    return level + others_visited[word]
                if word not in visited:
                    visited[word] = level + 1
                    queue.append((word, level + 1))
        return None

    def ladderLength(self, beginWord, endWord, wordList):
        """
        :type beginWord: str
        :type endWord: str
        :type wordList: List[str]
        :rtype: int
        """
        if endWord not in wordList or not endWord or not beginWord or not wordList:
            return 0
        self.length = len(beginWord)

        for word in wordList:
            for i in range(self.length):
                self.all_combo_dict[word[:i] + "*" + word[i+1:]].append(word)
        queue_begin = [(beginWord, 1)] 
        queue_end = [(endWord, 1)] 
        visited_begin = {beginWord: 1}
        visited_end = {endWord: 1}
        ans = None
        while queue_begin and queue_end:
            ans = self.visitWordNode(queue_begin, visited_begin, visited_end)
            if ans:
                return ans
            ans = self.visitWordNode(queue_end, visited_end, visited_begin)
            if ans:
                return ans
        return 0


if __name__ == "__main__":
    solution = Solution()
    print(
        solution.ladderLength("hit", "cog",
                              ["hot", "dot", "dog", "lot", "log", "cog"]))
    print(
        solution.ladderLength("hit", "cog",
                              ["hot", "dot", "dog", "lot", "log"]))
    print(
        solution.ladderLength("hot", "dog",
                              ["hot", "dog", "dot"]))
