
class Solution:
    def validMountainArray(self, A):
        """
        :type A: List[int]
        :rtype: bool
        """
        asc, desc = 0, 0
        for i in range(1, len(A)):
            if A[i - 1] < A[i]:
                if desc == 0:
                    asc += 1
            elif A[i - 1] > A[i]:
                desc += 1
        return asc > 0 and desc > 0 and asc + desc + 1 == len(A)
        

if __name__ == '__main__':
    solution = Solution()
    print(solution.validMountainArray([2,1]))
    print(solution.validMountainArray([3,5,5]))
    print(solution.validMountainArray([0,3,2,1]))
else:
    pass
