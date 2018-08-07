
class Solution:
    def wordPattern(self, pattern, str):
        """
        :type pattern: str
        :type str: str
        :rtype: bool
        """
        spacenum = len(pattern)
        strnew = str.split(' ')
        strnum = len(strnew)
        if strnum != spacenum:
            return False
        d = {}
        for i in range(spacenum):
            p = pattern[i]
            s = strnew[i]
            if p not in d.keys():
                if s in d.values():
                    return False
                d[p] = s
            else:
                if d[p] != s:
                    return False
        return True

if __name__ == '__main__':
    solution = Solution()
    print(solution.wordPattern('abba', 'dog cat cat dog'))
    print(solution.wordPattern('abba', 'dog cat cat doo'))
else:
    pass
