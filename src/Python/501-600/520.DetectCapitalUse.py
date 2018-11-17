
class Solution:
    def detectCapitalUse(self, word):
        """
        :type word: str
        :rtype: bool
        """
        return if word.islower() or word.isupper() or (len(word)>1 and word.title() == word)
            
if __name__ == '__main__':
    solution = Solution()
    print(solution.detectCapitalUse('USA'))
    print(solution.detectCapitalUse('leetcode'))
    print(solution.detectCapitalUse('Google'))
    print(solution.detectCapitalUse('FlaG'))
    print(solution.detectCapitalUse('mL'))
else:
    pass
