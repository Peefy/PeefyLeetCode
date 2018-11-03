
class Solution:
    def findLUSlength(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: int
        """
        m = len(a)
        n = len(b)
        shunxu = []
        for c in a:
            try:
                shunxu.append(b.index(c))
            except:
                shunxu.append(-1)      
        lastindex = -2
        count = 0
        maxcount = 0
        for i in range(len(shunxu)):
            if shunxu[i] >= lastindex:
                count += 1
            else:
                maxcount = max(count, maxcount)
                count = 1
            lastindex = shunxu[i]
        maxcount = max(count, maxcount)
        return maxcount
            
if __name__ == '__main__':
    solution = Solution()
    print(solution.findLUSlength('aaa', 'aaa'))
    print(solution.findLUSlength('aba', 'cdc'))
    print(solution.findLUSlength('abc', 'ddc'))
    print(solution.findLUSlength('abc', 'abcd'))
else:
    pass
