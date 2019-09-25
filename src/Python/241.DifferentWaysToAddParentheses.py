
class Solution:
    def partition(self, input):
        result = []
        if '+' not in input and '-' not in input and '*' not in input:
            result.append(int(input))
            return result
        for i in range(len(input)):
            c = input[i]
            if c == '+' or c == '-' or c == '*':
                for left in self.partition(input[0:i]):
                    for right in self.partition(input[i+1:]):
                        if c == '+':
                            result.append(left + right)
                        elif c == '-':
                            result.append(left - right)
                        elif c == '*':
                            result.append(left * right)
        return result


    def diffWaysToCompute(self, input):
        return self.partition(input)


if __name__ == "__main__":
    solution = Solution()
    print(solution.diffWaysToCompute("2-1-1"))
    
