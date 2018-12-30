
class Solution:
    def numberOfLines(self, widths, S):
        """
        :type widths: List[int]
        :type S: str
        :rtype: List[int]
        """
        LINE = 100
        line = 0
        lines = 1 
        for s in S:
            width = widths[ord(s) - ord('a')]
            line += width
            if line > LINE:
                line = width
                lines += 1
        return [lines, line]


if __name__ == '__main__':
    solution = Solution()
    print(solution.numberOfLines([10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10],\
        "abcdefghijklmnopqrstuvwxyz"))
    print(solution.numberOfLines([4,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10],\
        "bbbcccdddaaa"))
else:
    pass


