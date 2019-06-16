
class Solution:
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        if str == "":
            return 0
        str += ' '
        int32min = -2147483648
        int32max = +2147483647
        firstindex = 0
        for i in range(len(str)):
            c = str[i]
            if c == '-' or c == '+' or c.isdigit():
                firstindex = i
                break
            elif c != ' ':
                return 0
        secondindex = firstindex
        for i in range(firstindex + 1, len(str)):
            c = str[i]
            if c.isdigit() == False:
                secondindex = i
                break
        numstr = str[firstindex:secondindex]
        if numstr == '' or (len(numstr) == 1 and numstr[0].isdigit() == False):
            return 0
        num = int(numstr)
        if num > int32max:
            num = int32max
        elif num < int32min:
            num = int32min
        return num

if __name__ == "__main__":
    solution = Solution()
    print(solution.myAtoi("42"))
    print(solution.myAtoi("   -42"))
    print(solution.myAtoi("4193 with words"))
    print(solution.myAtoi("words and 987"))
    print(solution.myAtoi("-91283472332"))
    print(solution.myAtoi("3.14159"))
    print(solution.myAtoi("+-3"))
    print(solution.myAtoi("+"))
    print(solution.myAtoi("-"))
    print(solution.myAtoi("+1"))
   