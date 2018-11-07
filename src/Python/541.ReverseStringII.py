
class Solution:
    def reverseStr(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        strlist = list(s)
        n = len(strlist)
        i = 0
        while i < n:
            if i + k > n - 1:
                for j in range(i, (i + n) // 2):
                    m = n - 1 - j + i
                    strlist[j], strlist[m] = strlist[m], strlist[j] 
            else:
                for j in range(i, (i + i + k) // 2):
                    m = i + k - 1 - j + i
                    strlist[j], strlist[m] = strlist[m], strlist[j] 
            i += 2 * k
        return ''.join(strlist)
            
if __name__ == '__main__':
    solution = Solution()
    print(solution.reverseStr("abcdefg", 2))
else:
    pass
