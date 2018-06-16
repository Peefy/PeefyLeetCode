
class Solution:
    def nextcountAndSay(self, str):
        n = len(str)
        count = 0
        first = str[0]
        i = 0
        returnStr = ''
        while i < n:
            if first == str[i]:
                count += 1
            else:
                returnStr += '{}{}'.format(count, first)
                first = str[i]
                count = 1         
            i += 1
        returnStr += '{}{}'.format(count, first)
        return returnStr

    def countAndSay(self, n):
        """
        :type n: int
        :rtype: str
        """
        str = '1'
        if n == 1:
            return '1'
        else:
            for i in range(n - 1):
                returnStr = self.nextcountAndSay(str)
                str = returnStr
        return str

if __name__ == '__main__':
    solution = Solution()
    for i in range(1, 6):
        print(solution.countAndSay(i))
else:
    pass
