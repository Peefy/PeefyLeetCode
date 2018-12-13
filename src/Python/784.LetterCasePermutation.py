
class Solution:
    def letterCaseIndex(self, S, index):
        r = []
        for i in range(index, len(S)):
            if S[i].isalpha() == True:
                if S[i].isupper():
                    r += self.letterCaseIndex(S, i + 1)
                    S[i] = S[i].lower()
                    r.append(''.join(S))
                    self.letterCaseIndex(S, i + 1)
                else:
                    r += self.letterCaseIndex(S, i + 1)
                    S[i] = S[i].upper()
                    r.append(''.join(S))
                    r += self.letterCaseIndex(S, i + 1)
                break
        return r

    def letterCasePermutation(self, S):
        """
        :type S: str
        :rtype: List[str]
        """
        return self.letterCaseIndex(list(S), 0)


if __name__ == '__main__':
    solution = Solution()
    print(solution.letterCasePermutation("a1b2"))
    print(solution.letterCasePermutation("3z4"))
else:
    pass

