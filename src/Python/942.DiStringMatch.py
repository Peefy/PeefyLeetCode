
class Solution:
    def diStringMatch(self, S):
        """
        :type S: str
        :rtype: List[int]
        """
        left = 0
        right = len(S)
        r = []
        for s in S:
            if s == 'D':
                r.append(right)
                right -= 1
            else:
                r.append(left)
                left += 1
        r.append(left)
        return r
        

if __name__ == '__main__':
    solution = Solution()
    print(solution.diStringMatch("IDID"))
    print(solution.diStringMatch("III"))
    print(solution.diStringMatch("DDI"))
else:
    pass
