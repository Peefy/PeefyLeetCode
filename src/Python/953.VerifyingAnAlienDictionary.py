
class Solution:
    def compareto(self, one, two, myorder):
        m = len(one)
        n = len(two)
        if m < n:
            return not self.compareto(two, one, myorder)
        for i in range(n):
            if myorder[ord(one[i]) - ord('a')] < myorder[ord(two[i]) - ord('a')]:
                return False
            elif myorder[ord(one[i]) - ord('a')] > myorder[ord(two[i]) - ord('a')]:
                return True
        return True

    def isAlienSorted(self, words, order):
        """
        :type words: List[str]
        :type order: str
        :rtype: bool
        """
        myorder = [0] * 26
        for i, o in enumerate(order):
            myorder[ord(o) - ord('a')] = i 
        for i in range(len(words) - 1):
            if self.compareto(words[i], words[i + 1], myorder) == True:
                return False
        return True


if __name__ == '__main__':
    solution = Solution()
    print(solution.isAlienSorted(words = ["hello","leetcode"], order = "hlabcdefgijkmnopqrstuvwxyz"))
    print(solution.isAlienSorted(words = ["word","world","row"], order = "worldabcefghijkmnpqstuvxyz"))
else:
    pass
