
class Solution:
    def isOneBitCharacter(self, bits):
        """
        :type bits: List[int]
        :rtype: bool
        """
        i = 0
        n = len(bits)
        while i < n - 1:
            if bits[i] == 1:
                i += 2
            else:
                i += 1
        return i != n

if __name__ == '__main__':
    solution = Solution()
    print(solution.isOneBitCharacter([1, 0, 0]))
    print(solution.isOneBitCharacter([1, 1, 1, 0]))
    print(solution.isOneBitCharacter([0, 1, 1, 0]))
else:
    pass
