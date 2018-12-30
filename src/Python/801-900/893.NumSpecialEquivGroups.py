
class Solution:
    def numSpecialEquivGroups(self, A):
        """
        :type A: List[str]
        :rtype: int
        """
        return len({''.join(sorted(a[::2])) + ''.join(sorted(a[1::2])) for a in A})


if __name__ == '__main__':
    solution = Solution()
    print(solution.numSpecialEquivGroups(["a","b","c","a","c","c"]))
    print(solution.numSpecialEquivGroups(["aa","bb","ab","ba"]))
    print(solution.numSpecialEquivGroups(["abc","acb","bac","bca","cab","cba"]))
    print(solution.numSpecialEquivGroups(["abcd","cdab","adcb","cbad"]))
else:
    pass
