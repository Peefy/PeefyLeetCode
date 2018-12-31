
class Solution:
    def reorderLogFiles(self, logs):
        """
        :type logs: List[str]
        :rtype: List[str]
        """
        alphalogs = []
        digitlogs = []
        for log in logs:
            index = log.index(' ')
            first = log[:index]
            after = log[index + 1:]
            if after[0].isdigit():
                digitlogs.append(log)
            else:
                alphalogs.append(after + '@' + first + ' ')
        alphalogs.sort()
        alphalogs = list(map(lambda v : v[v.index('@') + 1:] + v[:v.index('@')] ,alphalogs))
        return alphalogs + digitlogs


if __name__ == '__main__':
    solution = Solution()
    print(solution.reorderLogFiles(["a1 9 2 3 1","g1 act car","zo4 4 7","ab1 off key dog","a8 act zoo"]))
else:
    pass
