
class Solution:
    def nextGreatestLetter(self, letters, target):
        """
        :type letters: List[str]
        :type target: str
        :rtype: str
        """
        for l in letters:
            if l > target:
                return l
        return letters[0]


if __name__ == '__main__':
    solution = Solution()
    print(solution.nextGreatestLetter(["c", "f", "j"], "a"))
    print(solution.nextGreatestLetter(["c", "f", "j"], "c"))
    print(solution.nextGreatestLetter(["c", "f", "j"], "k"))
else:
    pass

