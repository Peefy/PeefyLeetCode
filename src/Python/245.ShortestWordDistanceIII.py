
 
class Solution:
    def shortestWordDistance(self, words, word1, word2):
        res = len(words)
        a = -1
        b = -1
        for i in range(len(words)):
            if words[i] == word1:
                a = i
            if words[i] == word2:
                if word1 == word2:
                    a = b
                b = i
            if a != -1 and b != -1:
                res = min(res, abs(a - b))
        return res


if __name__ == "__main__":
    pass
    
