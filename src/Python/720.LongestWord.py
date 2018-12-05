
class Solution:
    def longestWord(self, words):
        """
        :type words: List[str]
        :rtype: str
        """
        best, temp = '', ''
        words.sort()
        for word in words:
            n = len(word)
            if temp[0 : n - 1] == word[0 : n - 1]:
                temp = word
                if n > len(best):
                    best = word
        return best

if __name__ == '__main__':
    solution = Solution()
    print(solution.longestWord(["w","wo","wor","worl", "world"]))
    print(solution.longestWord(["ogz","eyj","e","ey","hmn","v","hm","ogznkb","ogzn","hmnm","eyjuo","vuq","ogznk","og","eyjuoi","d"]))
else:
    pass
