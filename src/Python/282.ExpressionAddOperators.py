
class Solution:
    def recurse(self, num, target, index, prev, cur, val, s, ans):
        if index == len(num):
            if val == target and cur == 0:
                ans.append(''.join(s[1:]))
            return
        cur = cur * 10 + int(num[index])
        strop = str(cur)
        if cur > 0:
            self.recurse(num, target, index + 1, prev, cur, val, s, ans)

        s.append('+')
        s.append(strop)
        self.recurse(num, target, index + 1, cur, 0, val + cur, s, ans)
        s.pop()
        s.pop()

        if len(s) > 0:
            s.append('-')
            s.append(strop)
            self.recurse(num, target, index + 1, -cur, 0, val - cur, s, ans)
            s.pop()
            s.pop()
        
            s.append('*')
            s.append(strop)
            self.recurse(num, target, index + 1, cur * prev, 0, val - prev + (cur * prev), s, ans)
            s.pop()
            s.pop()

    def addOperators(self, num, target):
        ans = []
        self.recurse(num, target, 0, 0, 0, 0, [], ans)
        return ans


if __name__ == "__main__":
    solution = Solution()
    print(solution.addOperators('123', 6))
    print(solution.addOperators('232', 8))
