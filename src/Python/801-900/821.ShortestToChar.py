
class Solution:
    def shortestToChar(self, S, C):
        """
        :type S: str
        :type C: str
        :rtype: List[int]
        """
        indexlist = []
        r = []
        for i, s in enumerate(S):
            if C == s:
                indexlist.append(i)
        indexlist = [-10000] + indexlist + [10000]
        j = 1
        for i, s in enumerate(S):
            if C == s:
                r.append(0)
                j += 1
            else:           
                r.append(min(i - indexlist[j - 1], indexlist[j] - i))   
        return r
        
if __name__ == '__main__':
    solution = Solution()
    print(solution.shortestToChar(S = "loveleetcode", C = 'e'))
else:
    pass




