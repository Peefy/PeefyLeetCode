class Solution:
    def isIsomorphic(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        n = len(s)
        d = {}
        for i in range(n):
            if s[i] not in d.keys():
                if t[i] in d.values():
                    return False
                d[s[i]] = t[i]
            else:
                if d[s[i]] == t[i]:
                    continue
                else:
                    return False
        return True

if __name__ == '__main__':
    solution = Solution()
    print(solution.isIsomorphic('foo','brr'))
    print(solution.isIsomorphic('foo','bra'))
    print(solution.isIsomorphic('aa','ab'))
else:
    pass
