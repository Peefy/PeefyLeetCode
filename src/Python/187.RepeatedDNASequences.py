
class Solution:
    def findRepeatedDnaSequences(self, s):
        K = 10
        visited = set()
        res = set()
        for i in range(len(s) - K + 1):
            tmp = s[i:i+K]
            if tmp in visited:
                res.add(tmp)
            visited.add(tmp)
        return list(res)


if __name__ == "__main__":
    solution = Solution()
    print(solution.findRepeatedDnaSequences("AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"))

