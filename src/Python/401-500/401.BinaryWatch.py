
class Solution:
    def readBinaryWatch(self, num):
        """
        :type num: int
        :rtype: List[str]
        """
        times = []
        for i in range(12):
            for j in range(60):
                if bin(i).count('1') + bin(j).count('1') == num:         
                    times.append('{:d}:{:02d}'.format(i, j))
        return times

if __name__ == '__main__':
    solution = Solution()
    print(solution.readBinaryWatch(0))
    print(solution.readBinaryWatch(1))
    print(solution.readBinaryWatch(2))
    print(solution.readBinaryWatch(3))
    print(solution.readBinaryWatch(4))
    print(solution.readBinaryWatch(5))
    print(solution.readBinaryWatch(8))
    print(solution.readBinaryWatch(9))
    print(solution.readBinaryWatch(10))
else:
    pass
