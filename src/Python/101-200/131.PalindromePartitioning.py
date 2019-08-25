
class Solution:
    def recursive(self, ans, tmp, n, s, start):
        if start == n:
            ans.append(tmp[:])
            return
        for i in range(1, n + 1):
            if start + i > n:
                break
            sub = s[start : start + i]
            if sub[::-1] == sub:
                tmp.append(sub)
                self.recursive(ans, tmp, n, s, start + i)
                tmp.pop()


    def partition(self, s):
        ans = []
        tmp = []
        self.recursive(ans, tmp, len(s), s, 0)
        return ans


if __name__ == "__main__":
    solution = Solution()
    print(solution.partition("a"))
    print(solution.partition("abc"))
    print(solution.partition("aab"))
    print(solution.partition("ababa"))
        
