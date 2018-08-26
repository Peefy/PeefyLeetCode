# Definition for a binary tree node.
class Solution:
    def toHex(self, num):
        """
        :type num: int
        :rtype: str
        """
        if num == 0:
            return '0'
        hexnums = "0123456789abcdef"
        hexstr = []
        for i in range(7, -1, -1):
            hexstr.append(hexnums[(num >> (i * 4) & 0x0f)])
        k = 0
        for i in range(8):
            if hexstr[i] == '0':
                k += 1
            else:
                break
        return ''.join(hexstr[k::])
   
if __name__ == '__main__':
    solution = Solution()
    print(solution.toHex(-1))
    print(solution.toHex(0))
    print(solution.toHex(26))
else:
    pass
