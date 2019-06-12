
class Solution:
    def grayCode(self, n: int) -> list:
        return [i ^ i >> 1  for i in range(1 << n)]


if __name__ == "__main__":
    solution = Solution()
    print(solution.grayCode(2))
   