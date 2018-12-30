
class Solution:
    def fairCandySwap(self, A, B):
        """
        :type A: List[int]
        :type B: List[int]
        :rtype: List[int]
        """
        sub = sum(A) - sum(B)
        sub = sub // 2
        setB = set(B)
        for a in A:
            if a - sub in setB:
                return [a, a - sub]
        return None

if __name__ == '__main__':
    solution = Solution()
    print(solution.fairCandySwap(A = [1,1], B = [2,2]))
    print(solution.fairCandySwap(A = [1,2], B = [2,3]))
    print(solution.fairCandySwap(A = [2], B = [1,3]))
    print(solution.fairCandySwap(A = [1,2,5], B = [2,4]))
else:
    pass
