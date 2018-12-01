
class Solution:
    def countBinarySubstrings(self, s):
        """
        :type s: str
        :rtype: int
        """
        n = len(s)
        count = 0
        zerocount = 0
        onecount = 0
        lastonecount = 0
        lastzerocount = 0
        for i in range(n):
            if s[i] == '1':
                if zerocount > 0:
                    lastzerocount, zerocount = zerocount, 0
                    count += min(lastonecount, lastzerocount)
                onecount += 1 
            else:
                if onecount > 0:
                    lastonecount, onecount = onecount, 0
                    count += min(lastonecount, lastzerocount)
                zerocount += 1          
        else:
            count += min(lastonecount, zerocount) if s[-1] == '0' else min(onecount, lastzerocount)
        return count
                
if __name__ == '__main__':
    solution = Solution()
    print(solution.countBinarySubstrings("00110011"))
    print(solution.countBinarySubstrings("10101"))
    print(solution.countBinarySubstrings("00110"))
else:
    pass
