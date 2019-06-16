class Solution:
    def divide(self, dividend, divisor):
        """
        :type dividend: int
        :type divisor: int
        :rtype: int
        """
        positive = (dividend > 0) == (divisor > 0) # 检测是否同为正负
        dividend, divisor = abs(dividend), abs(divisor) 
        rlt = 0
        while dividend >= divisor: # 如果除数太大了，就重新开始
            temp_divisor, i = divisor, 1 # 更新除数和计量单位
            while dividend >= temp_divisor:
                dividend -= temp_divisor
                rlt += i
                i = i<<1
                temp_divisor = temp_divisor << 1
        if not positive:
            rlt = -rlt
        return min(max(rlt, -2**31), 2**31-1) # 返回限制内的数字
            

if __name__ == "__main__":
    solution = Solution()
    print(solution.divide(10, 3))
    print(solution.divide(7, -3))
    print(solution.divide(1, -1))
    print(solution.divide(0, 1))
    print(solution.divide(-1, 1))
    print(solution.divide(-2147483648, -1))
