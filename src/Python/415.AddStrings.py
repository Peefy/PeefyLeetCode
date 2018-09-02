
class Solution:
    def addStrings(self, num1, num2):
        """
        :type num1: str
        :type num2: str
        :rtype: str
        """
        n1 = len(num1)
        n2 = len(num2)
        if n1 < n2:
            num1 = '0' * (n2 - n1) + num1
            n = n2
        else:
            num2 = '0' * (n1 - n2) + num2
            n = n1
        num = []
        c = 0
        for i in range(n):
            j = n - 1 - i
            bit = int(num1[j]) + int(num2[j]) + c       
            if bit >= 10:
                bit -= 10
                c = 1 
            else:
                c = 0
            num.append(str(bit))
        if c == 1:
            num.append('1')
        num = num[::-1]
        return ''.join(num)

if __name__ == '__main__':
    solution = Solution()
    print(solution.addStrings('123', '32111'))
else:
    pass
