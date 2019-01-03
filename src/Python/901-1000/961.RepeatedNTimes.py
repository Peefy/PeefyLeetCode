
class Solution:
    def repeatedNTimes(self, A):
        """
        :type A: List[int]
        :rtype: int
        """
        from collections import Counter
        counteritems = Counter(A).items()
        for k, v in counteritems:
            if v > len(A) / 2 - 1:
                return k

if __name__ == '__main__':
    solution = Solution()
    print(solution.repeatedNTimes([1,2,3,3]))
    print(solution.repeatedNTimes([2,1,2,5,3,2]))
    print(solution.repeatedNTimes([5,1,5,2,5,3,5,4]))
else:
    pass
