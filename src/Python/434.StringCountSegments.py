
class Solution:
    def countSegments(self, s):
        """
        :type s: str
        :rtype: int
        """
        count = 0
        n = len(s)
        lastischar = False
        for i in range(n):    
            o = ord(s[i])   
            if (o >= 33 and o <= 122) == True and lastischar == False:
                count += 1
                lastischar = True
            elif (o >= 33 and o <= 122)  == False and lastischar == True:
                lastischar = False
        return count

if __name__ == '__main__':
    solution = Solution()
    print(solution.countSegments("Hello, my name is john"))
    print(solution.countSegments("love live! mu'sic forever"))
    print(solution.countSegments(", , , ,        a, eaefa"))
    print(solution.countSegments("a, bb, cc, cc#, "))
    print(solution.countSegments("The one-hour drama series Westworld is a dark odyssey about the dawn of artificial consciousness and the evolution of sin. Set at the intersection of the near future and the reimagined past, it explores a world in which every human appetite, no matter how noble or depraved, can be indulged."))
else:
    pass
