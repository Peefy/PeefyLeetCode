
class Solution:
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        roman = 'MDCLXVI'
        romandiv = [1000, 500, 100, 50, 10, 5, 1]
        ans = ''   
        strnum = str(num)
        i = 6 - (len(strnum) - 1) * 2
        for c in strnum:
            if c == '1':
                ans += roman[i]
            elif c == '2':
                ans += roman[i] * 2
            elif c == '3':
                ans += roman[i] * 3
            elif c == '4':
                ans += roman[i] + roman[i - 1]
            elif c == '5':
                ans += roman[i - 1]
            elif c == '6':
                ans += roman[i - 1] + roman[i]
            elif c == '7':
                ans += roman[i - 1] + roman[i] * 2
            elif c == '8':
                ans += roman[i - 1] + roman[i] * 3
            elif c == '9':
                ans += roman[i] + roman[i - 2]
            i += 2
        return ans


if __name__ == "__main__":
    solution = Solution()
    print(solution.intToRoman(3))
    print(solution.intToRoman(4))
    print(solution.intToRoman(9))
    print(solution.intToRoman(58))
    print(solution.intToRoman(1994))
   