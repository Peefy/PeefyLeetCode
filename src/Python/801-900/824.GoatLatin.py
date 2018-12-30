
class Solution:
    def toGoatLatin(self, S):
        """
        :type S: str
        :rtype: str
        """
        yuanyin = {'a', 'e', 'i', 'o', 'u', 'I', 'E', 'A', 'O', 'U'}
        words = S.split(' ')
        for i in range(len(words)):
            if words[i][0] in yuanyin:
                words[i] += "ma" + "a" * (i + 1)
            else:
                words[i] = words[i][1:] + words[i][0] + "ma" + "a" * (i + 1)
        return ' '.join(words)
        
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.toGoatLatin("I speak Goat Latin"))
    print(solution.toGoatLatin("The quick brown fox jumped over the lazy dog"))
else:
    pass




