class Solution:
    def strnumadd(self, num1, num2):
        num2 = '0' * (len(num1) - len(num2)) + num2
        c = 0
        rstr = ''
        for i in range(len(num1)):
            j = len(num1) - 1 - i
            r = int(num1[j]) + int(num2[j]) + c
            c = r // 10
            rstr = str(r % 10) + rstr
        if c != 0:
            rstr = str(c) + rstr
        return rstr

    def multiply(self, num1: 'str', num2: 'str') -> 'str':
        len1 = len(num1)
        len2 = len(num2)
        if len1 < len2:
            return self.multiply(num2, num1)
        num2 = '0' * (len1 - len2) + num2
        c = 0
        result = '0'
        for i in range(len1):
            j = len1 - i - 1
            bit = int(num2[j])
            if bit == 0:
                continue
            c = 0
            rstr = ''
            for k in range(len1):
                q = len1 - k - 1
                r = int(num1[q]) * bit + c
                c = r // 10
                rstr = str(r % 10) + rstr
            if c != 0:
                rstr = str(c) + rstr
            rstr += '0' * i
            result = self.strnumadd(rstr, result)
        return result


if __name__ == "__main__":
    solution = Solution()
    print(solution.multiply(num1 = "2", num2 = "3"))
    print(solution.multiply(num1 = "9", num2 = "9"))
    print(solution.multiply(num1 = "52", num2 = "60"))
    print(solution.multiply(num1 = "9133", num2 = "0"))
    print(solution.multiply(num1 = "9133", num2 = "1"))
    print(solution.multiply(num1 = "123", num2 = "456"))
    print(solution.multiply(num1 = "7967", num2 = "7067"))
   