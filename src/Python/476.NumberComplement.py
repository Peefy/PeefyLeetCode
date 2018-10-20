
class Solution:
    def findComplement(self, num):
        """
        :type num: int
        :rtype: int
        """
        r = 0
        n = 0
        while num > 0:
            bit = num & 0x01
            if bit == 1:
                (r) &= ~(1<<(n)) 
            else:  
                (r) |=  (1<<(n))
            n += 1
            num = num >> 1
        return r

if __name__ == '__main__':
    solution = Solution()
    print(solution.findComplement(1))
    print(solution.findComplement(3))
    print(solution.findComplement(5))
else:
    pass
