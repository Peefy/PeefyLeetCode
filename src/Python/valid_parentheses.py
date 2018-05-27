class Solution:
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        brakets = "()[]{}"
        index = []
        n = len(s)
        if n % 2 == 1:
            return False 
        for i in range(n):
            c = s[i]
            index.append(brakets.index(c))
        i = 0
        while i < len(index) - 1:
            one = index[i]
            two = index[i + 1]
            if one + 1 == two:
                index.pop(i)
                index.pop(i)
                i = 0
            else:
                i += 1
        if len(index) == 0:
            return True
        return False

if __name__ == '__main__':
    solution = Solution()
    print(solution.isValid(""))
    print(solution.isValid("("))
    print(solution.isValid("()"))
    print(solution.isValid("()[]{}"))
    print(solution.isValid("(]"))
    print(solution.isValid("([)]"))
    print(solution.isValid("[([]])"))
    print(solution.isValid("{[]}"))
else:
    pass
