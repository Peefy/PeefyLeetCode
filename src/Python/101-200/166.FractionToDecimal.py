
class Solution:
    def fractionToDecimal(self, a: int, b: int) -> str:
        if a % b == 0: return str(a // b)  #整除
        if a * b > 0: t = ''  #处理符号
        elif a * b < 0: t = '-'
        else: return '0'
        a = abs(a)
        b = abs(b)
        c = str(a // b)  #整数部分
        d = a % b
        z = {}  #余数字典
        s = ''  #小数部分
        k = 0  #小数位置计数
        flag = False  #循环小数标记
        while True:
            d *= 10  #长除补0
            if d not in z:
                z[d] = k  #记录第一次出现该余数的位置
                k += 1
            else:  #余数重复了
                flag = True
                break
            i = d // b
            d %= b
            s += str(i)
            if d == 0:  #除尽
                break
        if flag:  #出现循环时
            s = s[:z[d]] + '(' + s[z[d]:] + ')'  #以重复余数为界分离小数部分
        return t + c + '.' + s


if __name__ == "__main__":
    solution = Solution()
    print(solution.fractionToDecimal(1, 2))
    print(solution.fractionToDecimal(2, 1))
    print(solution.fractionToDecimal(2, 3))
