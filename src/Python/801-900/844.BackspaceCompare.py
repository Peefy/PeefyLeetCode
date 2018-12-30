
class Solution:
    def backspaceCompare(self, S, T):
        """
        :type S: str
        :type T: str
        :rtype: bool
        """
        s_stack = []
        t_stack = []
        for s in S:
            if s == '#':
                if len(s_stack) > 0:
                    s_stack.pop()
            else:
                s_stack.append(s)
        for t in T:
            if t == '#':
                if len(t_stack) > 0:
                    t_stack.pop()
            else:
                t_stack.append(t)
        return s_stack == t_stack


if __name__ == '__main__':
    solution = Solution()
    print(solution.backspaceCompare(S = "ab#c", T = "ad#c"))
    print(solution.backspaceCompare(S = "ab##", T = "c#d#"))
    print(solution.backspaceCompare(S = "a##c", T = "#a#c"))
    print(solution.backspaceCompare(S = "a#c", T = "b"))
    print(solution.backspaceCompare(S = "y#fo##f", T = "y#f#o##f"))
else:
    pass
