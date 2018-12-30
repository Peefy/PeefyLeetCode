
class Solution:
    def uniqueMorseRepresentations(self, words):
        """
        :type words: List[str]
        :rtype: int
        """
        morse = [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
        morsewords = set()
        for word in words:
            l = ""
            for c in word:
                l += morse[ord(c) - ord('a')]
            morsewords.add(l)
        return len(morsewords)


if __name__ == '__main__':
    solution = Solution()
    print(solution.uniqueMorseRepresentations(["gin", "zen", "gig", "msg"]))
else:
    pass


