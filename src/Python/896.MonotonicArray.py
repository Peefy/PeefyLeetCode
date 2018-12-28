
class Solution:
    def isMonotonic(self, A):
        """
        :type A: List[int]
        :rtype: bool
        """
        flag = []
        for i in range(len(A) - 1):
            if A[i + 1] != A[i]:
                flag.append(A[i + 1] > A[i])
        for i in range(len(flag) - 1):
            if flag[i] != flag[i + 1]:
                return False
        return True


if __name__ == '__main__':
    solution = Solution()
    print(solution.isMonotonic([1,2,2,3]))
    print(solution.isMonotonic([6,5,4,4]))
    print(solution.isMonotonic([1,3,2]))
    print(solution.isMonotonic([1,2,4,5]))
else:
    pass
