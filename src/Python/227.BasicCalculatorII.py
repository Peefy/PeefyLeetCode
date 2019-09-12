
class Solution:
    def calculate(self, s: str) -> int:
        # 小trick
        s += "+0"
        stack = []
        num = 0
        # 记录前一个符号
        sign = "+"
        for c in s:
            if c.isdigit():
                num = num * 10 + int(c)
            elif c in {"+", "-", "*", "/"}:
                #print(sign, num)
                if sign == "+":
                    stack.append(num)
                elif sign == "-":
                    stack.append(-num)
                elif sign == "*":
                    stack[-1] = stack[-1] * num
                elif sign == "/":
                    # 解决python的负数下取整
                    if stack[-1] < 0:
                        stack[-1] = -(-stack[-1] // num)
                    else:
                        stack[-1] = stack[-1] // num
                sign, num = c, 0
        return sum(stack)


if __name__ == "__main__":
    solution = Solution()
    print(solution.computeArea(-3, 0, 3, 4, 0, -1, 9, 2))

