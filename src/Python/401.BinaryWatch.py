
class Solution:
    def buildtime(self, h, m):
        if m < 10 and m >= 0:
            return str(h) + ':0' + str(m)
        if m >= 10 and m <= 59:
            return str(h) + ':' + str(m)
        if m < 0:
            return self.buildtime(h - 1, m + 59)
        if m > 59:
            return self.buildtime(h + 1, m - 59)

    def timeadd(self, time1, time2):
        time1_h_m = time1.split(':')
        time2_h_m = time2.split(':')
        h = int(time1_h_m[0]) + int(time2_h_m[0]) 
        m = int(time1_h_m[1]) + int(time2_h_m[1]) 
        return self.buildtime(h, m)
        
    def timesub(self, time1, time2):
        time1_h_m = time1.split(':')
        time2_h_m = time2.split(':')
        h = int(time1_h_m[0]) - int(time2_h_m[0]) 
        m = int(time1_h_m[1]) - int(time2_h_m[1]) 
        return self.buildtime(h, m)

    def readBinaryWatch(self, num):
        """
        :type num: int
        :rtype: List[str]
        """
        single = ["1:00", "2:00", "4:00", "8:00", "0:01", "0:02", "0:04", "0:08", "0:16", "0:32"]
        r = []
        if num == 1:
            return single
        if num == 10:
            return ["11:59"]
        if num == 9:
            #times = self.readBinaryWatch(10)
            #for time in times:
            #    for s in single:
            #        r.append(self.timesub(time, s))
            #return r
            return ['10:59', '9:59', '7:59', '3:59', '11:58', '11:57', '11:55', '11:51', '11:43', '11:27']
        if num > 1 and num < 5:
            times = self.readBinaryWatch(num - 1)


if __name__ == '__main__':
    solution = Solution()
    print(solution.readBinaryWatch(1))
    print(solution.readBinaryWatch(9))
    print(solution.readBinaryWatch(10))
else:
    pass
