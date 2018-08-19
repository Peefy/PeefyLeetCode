
class Solution:
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        r_len = len(ransomNote)
        m_len = len(magazine)
        if r_len > m_len:
            return False
        first = ransomNote[0]
        k = 0
        for i in range(m_len):
            if magazine[i] == first:
                k = i
                break
        for i in range(r_len):
            if k >= m_len:
                return False
            if ransomNote[i] != magazine[k]:
                k += 1
        return True
                  
if __name__ == '__main__':
    solution = Solution()
    print(solution.canConstruct("aa", "aab"))
    print(solution.canConstruct("a", "ab"))
    print(solution.canConstruct("aa", "ab"))
else:
    pass
