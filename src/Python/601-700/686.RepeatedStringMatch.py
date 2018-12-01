
class Solution:
    def repeatedStringMatch(self, A, B):
        """
        :type A: str
        :type B: str
        :rtype: int
        """
        count = len(B) // len(A)
        m = A * count
        if B in m:
            return count
        m += A
        if B in m:
            return count + 1
        m += A
        if B in m:
            return count + 2
        return -1
                
if __name__ == '__main__':
    solution = Solution()
    print(solution.repeatedStringMatch("abcd", "cdabcdab"))
else:
    pass
