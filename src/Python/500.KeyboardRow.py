
class Solution:
    firstLine = set('qwertyuiop')
    secondLine = set('asdfghjkl')
    thirdLine = set('zxcvbnm')
    def findWords(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """
        r = []
        for word in words:
            lowerWord = word.lower()
            if set(lowerWord).issubset(self.firstLine) or \
                 set(lowerWord).issubset(self.secondLine) or \
                 set(lowerWord).issubset(self.thirdLine):
                 r.append(word)
        return r

if __name__ == '__main__':
    solution = Solution()
    print(solution.findWords(["Hello", "Alaska", "Dad", "Peace"]))
else:
    pass
