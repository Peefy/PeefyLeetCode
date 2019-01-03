
class Solution:
    def sortArrayByParity(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        left = 0
        right = len(A) - 1
        while left < right:
            if A[left] % 2 == 0:
                left += 1
            else:
                if A[right] % 2 == 0:
                    A[left], A[right] = A[right], A[left]
                right -= 1
        return A


if __name__ == '__main__':
    solution = Solution()
    print(solution.sortArrayByParity([3, 1, 2, 4]))
    print(solution.sortArrayByParity([3, 1, 2, 4, 5, 6]))
else:
    pass


