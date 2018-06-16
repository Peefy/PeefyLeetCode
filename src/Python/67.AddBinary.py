class Solution:
    def addBinary(self, a, b):
        """
        :type a: str
        :type b: str
        :rtype: str
        """
        JINZHI = 2
        n1 = len(a)
        n2 = len(b)
        n = max(n1, n2)
        i = 0
        sum = ""
        while i < n - n1:
            a = "0" + a
            i += 1
        i = 0
        while i < n - n2:
            b = "0" + b
            i += 1
        i = n - 1
        c = 0
        while i >= 0:
            r = int(a[i]) + int(b[i]) + c
            c = r // JINZHI
            r = r % JINZHI
            sum = str(r) + sum
            i -= 1
        if c == 1:
            sum = "1" + sum
        return sum

if __name__ == '__main__':
    solution = Solution()
    print(solution.addBinary("11", "1"))
    print(solution.addBinary("1010", "1111"))
else:
    pass
