
from collections import Counter

class Solution:
    def hasGroupsSizeX(self, deck):
        """
        :type deck: List[int]
        :rtype: bool
        """
        if len(deck) < 2:
            return False
        counter = Counter(deck)
        for x in range(2, min(counter.values()) + 1):
            if all(map(lambda v : v % x == 0, counter.values())):
                return True
        return False

if __name__ == '__main__':
    solution = Solution()
    print(solution.hasGroupsSizeX([1,2,3,4,4,3,2,1]))
    print(solution.hasGroupsSizeX([1,1,1,2,2,2,3,3]))
    print(solution.hasGroupsSizeX([1]))
    print(solution.hasGroupsSizeX([1,1]))
    print(solution.hasGroupsSizeX([0,0,0,1,1,1,2,2,2]))
else:
    pass


