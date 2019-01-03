
class Solution:
    def largestTimeFromDigits(self, A):
        """
        :type A: List[int]
        :rtype: str
        """
        maxtime = ""
        for i in range(4):
            for j in range(4):
                for k in range(4):
                    if i == j or i == k or k == j:
                        continue
                    h = A[i] * 10 + A[j]
                    m = A[k] * 10 + A[6 - i - j - k]
                    if 0 <= h < 24 and 0 <= m < 60:
                        time = "%02d:%02d" % (h, m)
                        if time > maxtime:
                            maxtime = time
        return maxtime


if __name__ == '__main__':
    solution = Solution()
    print(solution.largestTimeFromDigits([1,2,3,4]))
    print(solution.largestTimeFromDigits([5,5,5,5]))
    print(solution.largestTimeFromDigits([0,0,0,0]))
    print(solution.largestTimeFromDigits([2,0,6,6]))
    print(solution.largestTimeFromDigits([0,2,7,6]))
else:
    pass
