
class Solution:
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        if numRows == 1:
            return s
        ans = ""
        store = {}
        for i in range(numRows):
            store[i] = ""
        count = 0
        isRow = True
        for c in s:
            if isRow == True:
                store[count] += c
                count += 1
                if count == numRows:
                    count = numRows - 2
                    isRow = False
                    if count <= 0:
                        count = 0
                        isRow = True
            else:
                store[count] += c
                count -= 1
                if count == 0:
                    isRow = True
        for i in range(numRows):
            ans += store[i]
        return ans


if __name__ == "__main__":
    solution = Solution()
    print(solution.convert("LEETCODEISHIRING", 3))
    print(solution.convert("LEETCODEISHIRING", 4))
