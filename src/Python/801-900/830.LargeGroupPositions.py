
class Solution:
    def largeGroupPositions(self, S):
        """
        :type S: str
        :rtype: List[List[int]]
        """
        r = []
        S += ' '
        ISBIG = 3
        lastindex = 0
        count = 0
        for i in range(len(S) - 1):
            if S[i] != S[i + 1]:
                if count >= ISBIG - 1:
                    r.append([lastindex, lastindex + count])
                count = 0
                lastindex = i + 1
            else:
                count += 1
        return r

        
if __name__ == '__main__':
    solution = Solution()
    print(solution.largeGroupPositions("abbxxxxzzy"))
    print(solution.largeGroupPositions("abc"))
    print(solution.largeGroupPositions("aaa"))
    print(solution.largeGroupPositions("abcdddeeeeaabbbcd"))
else:
    pass




