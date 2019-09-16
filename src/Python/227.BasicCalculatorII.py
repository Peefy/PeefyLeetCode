
class Solution:
    def calculate(self, s):
        s += "+0"
        stack = []
        num = 0
        sign = "+"
        for c in s:
            if c.isdigit():
                num = num * 10 + int(c)
            elif c in {"+", "-", "*", "/"}:
                if sign == "+":
                    stack.append(num)
                elif sign == "-":
                    stack.append(-num)
                elif sign == "*":
                    stack[-1] = stack[-1] * num
                elif sign == "/":
                    if stack[-1] < 0:
                        stack[-1] = -(-stack[-1] // num)
                    else:
                        stack[-1] = stack[-1] // num
                sign, num = c, 0
        return sum(stack)


if __name__ == "__main__":
    solution = Solution()
    print(solution.calculate("3+2*2"))
    print(solution.calculate(" 3/2 "))
    
