class Solution:
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        n = len(digits)
        i = n - 1
        c = 1
        while i >= 0:
            digit = digits[i]
            digit = digit + c
            digits[i], c = digit % 10, digit // 10
            i -= 1
            if c == 0:
                break
        if c == 1:
            digits.insert(0, c)
        return digits

if __name__ == '__main__':
    solution = Solution()
    print(solution.plusOne([4,3,2,1]))
    print(solution.plusOne([9,9,9,9]))
else:
    pass
