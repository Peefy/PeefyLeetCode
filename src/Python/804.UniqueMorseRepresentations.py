
class Solution:
    def rotateString(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: bool
        """
        nA = len(A)
        nB = len(B)
        if nA != nB:
            return False
        if A == "":
            return True
        for i in range(nA):
            A = A[1:] + A[0]
            if A == B:
                return True
        return False


if __name__ == '__main__':
    solution = Solution()
    print(solution.rotateString(A = 'abcde', B = 'cdeab'))
    print(solution.rotateString(A = 'abcde', B = 'abced'))
else:
    pass

