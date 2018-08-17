
class Solution:
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        n1 = len(s)
        n2 = len(t)
        if n1 != n2:
            return False
        d1 = {}
        d2 = {}
        for i in range(n1):
            if s[i] not in d1.keys():
                d1[s[i]] = 1
            else:
                d1[s[i]] += 1
        for i in range(n2):
            if t[i] not in d2.keys():
                d2[t[i]] = 1
            else:
                d2[t[i]] += 1
        return d1 == d2

if __name__ == '__main__':
    solution = Solution()
    print(solution.isAnagram("car", "tar"))
else:
    pass
