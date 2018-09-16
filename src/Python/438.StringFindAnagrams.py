
class Solution:
    def findAnagrams(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: List[int]
        """
        r = []
        n = len(s)
        m = len(p)
        if n < m:
            return r
        p_dict = {}
        s_dict = {}
        for i in range(m):
            if p[i] not in p_dict.keys():
                p_dict[p[i]] = 1
            else:
                p_dict[p[i]] += 1
            if s[i] not in s_dict.keys():
                s_dict[s[i]] = 1
            else:
                s_dict[s[i]] += 1
        if s_dict == p_dict:
            r.append(0)
        for i in range(n - m):
            if s_dict[s[i]] == 1:
                s_dict.pop(s[i])
            else:
                s_dict[s[i]] -= 1
            if s[i + m] not in s_dict.keys():
                s_dict[s[i + m]] = 1
            else:
                s_dict[s[i + m]] += 1
            if s_dict == p_dict:
                r.append(i + 1)
        return r

if __name__ == '__main__':
    solution = Solution()
    print(solution.findAnagrams("abab", "ba"))
    print(solution.findAnagrams("baa", "aa"))
    print(solution.findAnagrams("abab", "c"))
    print(solution.findAnagrams("cbabacd", "abc"))
else:
    pass
