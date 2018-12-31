
class Solution:
    def reverseOnlyLetters(self, S):
        """
        :type S: str
        :rtype: str
        """
        S = list(S)
        left = 0
        right = len(S) - 1
        while left < right:
            while left <= len(S) - 1 and S[left].isalpha() == False: 
                left += 1
            while right >= 0 and S[right].isalpha() == False: 
                right -= 1
            if left < right:
                S[left], S[right] = S[right], S[left]
                left += 1
                right -= 1
        return ''.join(S)


if __name__ == '__main__':
    solution = Solution()
    print(solution.reverseOnlyLetters("ab-cd"))
    print(solution.reverseOnlyLetters("a-bC-dEf-ghIj"))
    print(solution.reverseOnlyLetters("Test1ng-Leet=code-Q!"))
    print(solution.reverseOnlyLetters("7_28]"))
else:
    pass


