
class Solution:
    def hIndex(self, citations: List[int]) -> int:
        n = len(citations)
        bucket = [0] * (n + 1)
        for citation in citations:
            if citation >= n:
                bucket[n] += 1
            else:
                bucket[citation] += 1
        cur = 0
        for i in range(n, -1, -1):
            cur += bucket[i]
            if cur >= i:
                return i


if __name__ == "__main__":
    solution = Solution()
    print(solution.hIndex([3, 0, 6, 1, 5]))

