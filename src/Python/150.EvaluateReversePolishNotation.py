
class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        """
        :type tokens: List[str]
        :rtype: int
        """
        stack = list()
        operations = {'+', '-', '*', '/'}
        for token in tokens:
            if token in operations:
                right = stack.pop()
                left = stack.pop()
                if token == '+':
                    tmp = left + right
                elif token == '-':
                    tmp = left - right
                elif token == '*':
                    tmp = left * right
                else:
                    if left * right >= 0:
                        tmp = left // right
                    else:
                        tmp = -(-left // right)
                    
                stack.append(tmp)
            else:
                stack.append(int(token))
        return stack[0]


if __name__ == "__main__":
    solution = Solution()
    print(solution.evalRPN(["2", "1", "+", "3", "*"]))
    print(solution.evalRPN(["4", "13", "5", "/", "+"]))
