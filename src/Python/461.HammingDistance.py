
class Solution:
    def hammingDistance(self, x, y):
        """
        :type x: int
        :type y: int
        :rtype: int
        """
        if x > y:
            return self.hammingDistance(y, x)
        count = 0
        i = 0
        bin_x = bin(x)[2:][::-1]
        bin_y = bin(y)[2:][::-1]
        leny = len(bin_y)
        lenx = len(bin_x)
        while i < leny:
            if i < lenx:
                if bin_x[i] != bin_y[i]:
                    count += 1
            else:
                if bin_y[i] == '1':
                    count += 1
            i += 1
        return count
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.hammingDistance(1, 4))
else:
    pass
