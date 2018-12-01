
from collections import Counter

class Solution:
    def judgeCircle(self, moves):
        """
        :type moves: str
        :rtype: bool
        """
        counter = Counter(moves)
        return counter['L'] == counter['R'] and counter['U'] == counter['D']

if __name__ == '__main__':
    solution = Solution()
    print(solution.judgeCircle("LL"))
else:
    pass
