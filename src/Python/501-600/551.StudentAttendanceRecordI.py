
class Solution:
    def checkRecord(self, s):
        """
        :type s: str
        :rtype: bool
        """
        Acount = 0
        Lcount = 0
        for c in s:
            Acount += 1 if c == 'A' else 0
            if Acount >= 2:
                return False
            Lcount = Lcount + 1 if c == 'L' else 0 
            if Lcount >= 3:
                return False
        return True
            
if __name__ == '__main__':
    solution = Solution()
    print(solution.checkRecord("PPALLP"))
    print(solution.checkRecord("PPALLL"))
    print(solution.checkRecord("LLLALL"))
else:
    pass
