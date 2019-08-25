
class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        for x, y in itertools.zip_longest(version1.split("."), version2.split("."), fillvalue=0):
            if int(x) != int(y): return 1 if int(x) > int(y) else -1
        return 0


if __name__ == "__main__":
    solution = Solution()
    print(solution.compareVersion("0.1", "1.1"))
