
class Solution:
    def isLongPressedName(self, name, typed):
        """
        :type name: str
        :type typed: str
        :rtype: bool
        """
        index = 0
        jndex = 0
        n = len(name)
        while index < n:
            c = name[index]
            i = index + 1
            icount = 0
            jcount = 0
            while i < n and c == name[i]:
                icount += 1
                i += 1
            while jndex < len(typed) and c == typed[jndex]:
                jcount += 1
                jndex += 1
            if jcount >= icount + 1:
                index += icount + 1
            else:
                return False
        return True


if __name__ == '__main__':
    solution = Solution()
    print(solution.isLongPressedName(name = "alex", typed = "aaleex"))
    print(solution.isLongPressedName(name = "saeed", typed = "ssaaedd"))
    print(solution.isLongPressedName(name = "leelee", typed = "lleeelee"))
else:
    pass


