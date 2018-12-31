
class Solution:
    def sortArrayByParityII(self, A):
        """
        :type A: List[int]
        :rtype: List[int]
        """
        old = []
        even = []
        for a in A:
            if a % 2 == 0:
                old.append(a)
            else:
                even.append(a)
        for i in range(len(A)):
            if i % 2 == 0:
                A[i] = old.pop()
            else:
                A[i] = even.pop()
        return A

if __name__ == '__main__':
    solution = Solution()
    print(solution.sortArrayByParityII([4, 2, 5, 7]))
else:
    pass


