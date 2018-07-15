
class Solution:
    def getNext(self, num):
        num_r = 0
        while num > 0:
            c = num % 10   
            num = num // 10 
            num_r += c ** 2
        return num_r

    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        d = {}
        happy = n
        count = 0
        while happy != 1:
            if happy in d.values():
                return False
            d[count] = happy
            happy = self.getNext(happy)     
            count += 1   
        return True

if __name__ == '__main__':
    solution = Solution()
    print(solution.isHappy(19))
    print(solution.isHappy(29))
else:
    pass
