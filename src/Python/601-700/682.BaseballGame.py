
class Solution:
    def calPoints(self, ops):
        """
        :type ops: List[str]
        :rtype: int
        """
        opsstack = []
        point = 0
        for o in ops:
            p = 0
            if o == '+':
                p = opsstack[-1] + opsstack[-2]
                point += p
                opsstack.append(p)
            elif o == 'C':
                p = opsstack[-1]
                opsstack.pop()
                point -= p
            elif o == 'D':
                p = opsstack[-1] * 2
                point += p
                opsstack.append(p)
            else:
                p = int(o)
                point += p
                opsstack.append(p)
        return point
                
if __name__ == '__main__':
    solution = Solution()
    print(solution.calPoints(["5","2","C","D","+"]))
    print(solution.calPoints(["5","-2","4","C","D","9","+","+"]))
else:
    pass
