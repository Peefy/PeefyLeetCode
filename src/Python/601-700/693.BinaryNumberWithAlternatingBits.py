
class Solution:
    def hasAlternatingBits(self, n):
        """
        :type n: int
        :rtype: bool
        """
        binary = bin(n)[2:]
        last = binary[0]
        for i in range(1, len(binary)):
            if binary[i] == last:
                return False
            last = binary[i]
        return True
                
if __name__ == '__main__':
    solution = Solution()
    print(solution.hasAlternatingBits(5))
    print(solution.hasAlternatingBits(6))
else:
    pass
