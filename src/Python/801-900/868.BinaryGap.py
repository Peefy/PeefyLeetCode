
class Solution:
    def binaryGap(self, N):
        """
        :type N: int
        :rtype: int
        """
        dis = 0
        last = 0
        now = 1
        while N > 0:
            bit = N & 0x01
            if bit == 1 and last == 0:
                last = now 
            elif bit == 1:
                dis = max(dis, now - last)
                last = now
            N >>= 1
            now += 1
        return dis


if __name__ == '__main__':
    solution = Solution()
    print(solution.binaryGap(22))
    print(solution.binaryGap(5))
    print(solution.binaryGap(6))
    print(solution.binaryGap(8))
else:
    pass
