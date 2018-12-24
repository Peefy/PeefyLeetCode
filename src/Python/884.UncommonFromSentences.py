
class Solution:
    def uncommonFromSentences(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: List[str]
        """
        from collections import Counter
        c = Counter(A.split(' ') + B.split(' '))
        return [v for v in c if c[v] == 1]
        

if __name__ == '__main__':
    solution = Solution()
    print(solution.uncommonFromSentences(A = "this apple is sweet", B = "this apple is sour"))
    print(solution.uncommonFromSentences(A = "apple apple", B = "banana"))
else:
    pass
