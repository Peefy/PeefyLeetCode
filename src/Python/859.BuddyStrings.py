
class Solution:
    def buddyStrings(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: bool
        """
        if len(A) != len(B):
            return False
        r = []
        s = set()
        for a, b in zip(A, B):
            s.add(a)
            if a != b:
                r.append((a, b))
        if len(r) == 0 and len(s) < len(A):
            return True
        if len(r) != 2:
            return False
        return r[0][0] == r[1][1] and r[0][1] == r[1][0]       

if __name__ == '__main__':
    solution = Solution()
    print(solution.buddyStrings(A = "ab", B = "ba"))
    print(solution.buddyStrings(A = "aaaaaaabc", B = "aaaaaaacb"))
    print(solution.buddyStrings(A = "", B = "aa"))
    print(solution.buddyStrings(A = "ba", B = "aa"))
    print(solution.buddyStrings(A = "aa", B = "aa"))
    print(solution.buddyStrings(A = "ab", B = "ab"))
    print(solution.buddyStrings(A = "ab", B = "ca"))
else:
    pass
