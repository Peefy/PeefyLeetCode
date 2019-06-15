
class Solution:
    def restoreIpAddresses(self, s: str):
        ans = []
        tmp = []
        self.recursive(ans, tmp, s, 0, 0)
        return ans


    def recursive(self, ans, tmp, s, l, index):
        if len(tmp) == 4 and l == len(s):
            ans.append('.'.join(tmp[:])) 
            return
        for i in range(index, 4):
            for j in range(1, 4):
                if l + j > len(s):
                    continue
                if s[l] == '0' and j > 1:
                    continue
                num = int(s[l:l+j])
                if num > 255:
                    continue
                l += j
                tmp.append(str(num))
                self.recursive(ans, tmp, s, l, i + 1)
                tmp.pop()
                l -= j


if __name__ == "__main__":
    solution = Solution()
    print(solution.restoreIpAddresses("25525511135"))
    print(solution.restoreIpAddresses("010010"))
   