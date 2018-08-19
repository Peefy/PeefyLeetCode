
class Solution:
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        ransomNote = list(ransomNote)
        magazine = list(magazine)
        r_len = len(ransomNote)
        m_len = len(magazine)
        if r_len > m_len:
            return False
        if r_len == 0:
            return True
        i = 0
        k = 0
        while i < r_len and k < m_len:
            if ransomNote[i] == magazine[k]:
                magazine.pop(k)
                m_len -= 1
                k = 0
                i += 1
            else:
                k += 1
        return i == r_len
                  
if __name__ == '__main__':
    solution = Solution()
    print(solution.canConstruct("a", "b"))
    print(solution.canConstruct("aa", "ab"))
    print(solution.canConstruct("aa", "aa"))
    print(solution.canConstruct("bjaajgea", \
        "affhiiicabhbdchbidghccijjbfjfhjeddgggbajhidhjchiedhdibgeaecffbbbefiabjdhggihccec"))
else:
    pass
